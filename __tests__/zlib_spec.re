open Jest;

let foxString = "the quick brown fox jumped over the lazy dog. " ++
  "the fancy brown fox jumped over the lazy dog. " ++
  "the quick brown fox jumped over the lazy dog.";
let () =
  describe(
    "zlib",
    ExpectJs.(
      () => 
        test("#deflateSync", () =>
          expect(String.length(Node.Buffer.toString(Zlib.deflateSync(Node.Buffer.fromStringWithEncoding(foxString, `utf8)))))
          |> toBe(59)
        )
      
    )
  );
let () =
  describe(
    "zlib",
    ExpectJs.(
      () => {
        test("#deflateSync then #inflateSync", () =>
          expect(Node.Buffer.toString(Zlib.inflateSync(Zlib.deflateSync(Node.Buffer.fromString(foxString)))))
          |> toBe(foxString)
        );
      }
    ),
  );
