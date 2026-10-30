struct S { char pad[0xca]; unsigned short n; char pad2[0x44]; unsigned *data; int end; int pad3; int index; unsigned __int64 run(); };
unsigned __int64 S::run() { if (n < 0x200) return 0; data[index] |= (end-index-1)*0x1000000; return 0; }
