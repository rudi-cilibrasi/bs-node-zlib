[%%raw "const Zlib = require('zlib');"];

[@bs.val] external unzipSyncBase : (Node.Buffer.t) => Node.Buffer.t = "Zlib.unzipSync";
let unzipSync : (Node.Buffer.t) => Node.Buffer.t = (s) => unzipSyncBase(s);

[@bs.val] external deflateSyncBase : (Node.Buffer.t) => Node.Buffer.t = "Zlib.deflateSync";
let deflateSync : (Node.Buffer.t) => Node.Buffer.t = (s) => deflateSyncBase(s);

[@bs.val] external deflateRawSyncBase : (Node.Buffer.t) => Node.Buffer.t = "Zlib.deflateRawSync";
let deflateRawSync : (Node.Buffer.t) => Node.Buffer.t = (s) => deflateRawSyncBase(s);

[@bs.val] external inflateSyncBase : (Node.Buffer.t) => Node.Buffer.t = "Zlib.inflateSync";
let inflateSync : (Node.Buffer.t) => Node.Buffer.t = (s) => inflateSyncBase(s);

[@bs.val] external inflateRawSyncBase : (Node.Buffer.t) => Node.Buffer.t = "Zlib.inflateRawSync";
let inflateRawSync : (Node.Buffer.t) => Node.Buffer.t = (s) => inflateRawSyncBase(s);

[@bs.val] external gzipSyncBase : (Node.string_buffer) => Node.Buffer.t = "Zlib.gzipSync";
let gzipSync : (Node.string_buffer) => Node.Buffer.t = (s) => gzipSyncBase(s);

[@bs.val] external gunzipSyncBase : (Node.string_buffer) => Node.Buffer.t = "Zlib.gunzipSync";
let gunzipSync : (Node.string_buffer) => Node.Buffer.t = (s) => gunzipSyncBase(s);

