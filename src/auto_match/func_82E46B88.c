int fn_82E46B88(char *p, unsigned __int64 *out) {
 int result = 0;
 if (!out) result = 0x80070057;
 else if (!(*(unsigned int *)(p+0x34) & 0x10)) result = 0xc00d36c9;
 else *out = *(unsigned __int64 *)(p+0x58);
 return result;
}
