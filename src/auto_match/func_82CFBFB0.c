static __forceinline char convert(char c){if(c<65 || c>90)return c;return (char)(c+32);}
static __forceinline void convert_all(char *p){do{*p=convert(*p);++p;}while(*p);}
char *fn_82CFBFB0(char *s){if(*s)convert_all(s);return s;}
