open Jest;

let foxString = "the quick brown fox jumped over the lazy dog. " ++
  "the fancy brown fox jumped over the lazy dog. " ++
  "the quick brown fox jumped over the lazy dog.";

let rec hanoiBase = (f, t, x, n) => switch (n) {
  | 1 => f ++ t
  | n => hanoiBase(f,x,t,n-1) ++ hanoiBase(f,t,x,1) ++ hanoiBase(x,t,f,n-1)
};

let hanoi = (n:int) => hanoiBase("a", "b", "c", n);

/* it's 131070 bytes long */
let bigString = hanoi(16);

let () =
  describe(
    "zlib",
    ExpectJs.(
      () => 
        test("#deflateSync", () =>
          expect(String.length(Node.Buffer.toString(Zlib.deflateSync(Node.Buffer.fromStringWithEncoding(foxString, `binary)))))
          |> toBe(59)
        )
      
    )
  );
let () =
  describe(
    "zlib",
    ExpectJs.(
      () => {
        test("#deflateSync then #inflateSync on foxString", () =>
          expect(Node.Buffer.toString(Zlib.inflateSync(Zlib.deflateSync(Node.Buffer.fromString(foxString)))))
          |> toBe(foxString)
        );
      }
    ),
  );

let () =
  describe(
    "zlib",
    ExpectJs.(
      () => {
        test("#deflateSync then #inflateSync on bigString", () =>
          expect(Node.Buffer.toString(Zlib.inflateSync(Zlib.deflateSync(Node.Buffer.fromString(bigString)))))
          |> toBe(bigString)
        );
      }
    ),
  );
