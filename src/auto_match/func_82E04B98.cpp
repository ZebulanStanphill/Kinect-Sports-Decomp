struct E { unsigned v; char tail[4]; }; struct Unit_82E04B98 { char pad[8]; E *data; unsigned get(int i); }; unsigned Unit_82E04B98::get(int i) { return data[i].v & ~1u; }
