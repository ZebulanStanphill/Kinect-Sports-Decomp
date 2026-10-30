typedef unsigned __int64 U64;
int fn_82E46B88(char *p, U64 *out) {
 int result = 0;
 if (!out) result = 0x80070057;
 else if (!(*(unsigned int *)(p+0x34) & 0x10)) result = 0xc00d36c9;
 else *out = *(U64 *)(p+0x58);
 return result;
}
