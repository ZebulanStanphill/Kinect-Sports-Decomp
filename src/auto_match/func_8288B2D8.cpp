struct Unit_8288B2D8 { int pad[2]; unsigned n; int pad2; unsigned *data; unsigned get(unsigned i); };
unsigned Unit_8288B2D8::get(unsigned i) { return i<n ? data[i] : 0; }
