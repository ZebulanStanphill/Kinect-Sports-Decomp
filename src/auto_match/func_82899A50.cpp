struct S { unsigned char pad[5]; unsigned char data[1]; unsigned char get(int i); };
unsigned char S::get(int i) { return data[i]; }
