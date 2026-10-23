extern "C" int fn_82CFBC20(const char*,const char*,int);
extern "C" const unsigned char *fn_82CFBEB0(const char*,int);extern "C" const char *fn_82CFBEA8(const char*,int);
struct String { char a[48]; };
extern "C" void fn_82D05178(String*,const char*);extern "C" void fn_82D04E70(String*,int,int);extern "C" int fn_82D04540(String*,const char*);extern "C" void fn_82CE7E68(String*);
struct Type {int a;const char *name;int b;};extern "C" Type lbl_8317F680[];
extern "C" int fn_82CFD9A0(const char *name) {
 if(fn_82CFBC20(name,"enum ",5)==0)return 24;
 if(fn_82CFBC20(name,"flags ",6)==0)return 31;
 if(fn_82CFBC20(name,"hkArray<",8)==0)return 22;
 if(fn_82CFBC20(name,"hkSimpleArray<",14)==0)return 26;
 if(fn_82CFBC20(name,"char*",5)==0)return 29;
 if(fn_82CFBC20(name,"hkStringPtr",11)==0)return 33;
 const unsigned char *p=fn_82CFBEB0(name,'*');if(p && !p[1])return 20;
 String s;fn_82D05178(&s,name);const char *end=fn_82CFBEA8(name,'[');if(end)fn_82D04E70(&s,0,end-name);
 int n=0;const char **t=&lbl_8317F680[0].name;do{if(fn_82D04540(&s,*t)){fn_82CE7E68(&s);return n;}t+=3;++n;}while((int)t<(int)((char*)lbl_8317F680+0x19c));fn_82CE7E68(&s);return 0;
}
