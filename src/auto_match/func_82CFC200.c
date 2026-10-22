extern void fn_82CE5430(void *);
extern void **fn_82CE5410(void);
extern char *fn_82CE52E0(void *,int);
extern unsigned int strlen(const char *);
extern char *strncpy(char *,const char *,unsigned int);
char *fn_82CFC200(char *text,int limit) {
 char scope[48]; void *allocator; int length; char *result;
 fn_82CE5430(scope);
 allocator=fn_82CE5410()[4];
 length=(int)strlen(text);
 if (length > limit) length=limit;
 result=fn_82CE52E0(allocator,length+1);
 if(length!=0) strncpy(result,text,length);
 result[length]=0;
 return result;
}
