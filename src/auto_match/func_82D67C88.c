typedef struct Funcs_82D67C88 {
 void (*create)(void), (*penetrations)(void), (*closest)(void), (*cast)(void);
 unsigned char flipped, predictive;
} Funcs_82D67C88;
extern void fn_82D59158(void *, const Funcs_82D67C88 *, int, int);
extern void fn_82D674D0(void);
extern void fn_82D675B0(void);
extern void fn_82D67A78(void);
extern void fn_82D75FD0(void);
void fn_82D67C88(void *dispatcher)
{
 Funcs_82D67C88 f;
 f.flipped = 0;
 f.predictive = 0;
 f.create = fn_82D674D0;
 f.penetrations = fn_82D675B0;
 f.closest = fn_82D67A78;
 f.cast = fn_82D75FD0;
 fn_82D59158(dispatcher, &f, 1, 1);
}
