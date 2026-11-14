extern void fn_82D539F8(void);
extern void fn_82D5B3B0(void);
extern void fn_82D5E360(void);
extern void fn_82D5F458(void);
extern void fn_82D62140(void);
extern void fn_82D67EF8(void);
extern void fn_82D68F28(void);
extern void fn_82D69C40(void);
extern void fn_82D742B0(void);

int fn_82DF6BF0(void *p)
{
  return p == (void *)fn_82D67EF8 ? 1 :
         p == (void *)fn_82D62140 ? 2 :
         p == (void *)fn_82D69C40 ? 3 :
         p == (void *)fn_82D68F28 ? 4 :
         p == (void *)fn_82D5B3B0 ? 5 :
         p == (void *)fn_82D742B0 ? 6 :
         p == (void *)fn_82D539F8 ? 7 :
         p == (void *)fn_82D5E360 ? 8 :
         p == (void *)fn_82D5F458 ? 9 : 0;
}
