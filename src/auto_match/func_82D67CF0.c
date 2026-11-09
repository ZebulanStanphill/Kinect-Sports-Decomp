typedef struct Funcs_82D67CF0 {
 void (*create)(void), (*penetrations)(void), (*closest)(void), (*cast)(void);
 unsigned char flipped, predictive;
} Funcs_82D67CF0;
extern void fn_82D59268(void *, const Funcs_82D67CF0 *, int, int);
extern void fn_82D674D0(void);
extern void fn_82D675B0(void);
extern void fn_82D67A78(void);
extern void fn_82D75FD0(void);
void fn_82D67CF0(void *dispatcher)
{
 Funcs_82D67CF0 f;
 f.flipped = 0;
 f.predictive = 0;
 f.create = fn_82D674D0;
 f.penetrations = fn_82D675B0;
 f.closest = fn_82D67A78;
 f.cast = fn_82D75FD0;
 fn_82D59268(dispatcher, &f, 1, 1);
}
