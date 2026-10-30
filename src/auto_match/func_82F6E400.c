char *strncat(char *dst, const char *src, unsigned int count) {
 char *out = dst;
 while (*out++) {}
 --out;
 if (count) {
  do {
   char c = *src++;
   --count;
   *out++ = c;
   if (!c) return dst;
  } while (count);
 }
 *out = 0;
 return dst;
}
