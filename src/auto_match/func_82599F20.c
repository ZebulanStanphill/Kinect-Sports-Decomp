typedef void (*Handler_82599F20)(void);

extern void fn_82814360(const char *name, Handler_82599F20 handler0, Handler_82599F20 handler1,
                        Handler_82599F20 handler2);
extern void fn_82815220(Handler_82599F20 handler0, Handler_82599F20 handler1, int arg2,
                        Handler_82599F20 handler3, int arg4);

extern void fn_82522D90(void);
extern void fn_82599B80(void);
extern void fn_82599C60(void);
extern void fn_82599C98(void);
extern void fn_82599CD8(void);
extern void fn_82599DE8(void);
extern void fn_82599EC0(void);
extern void fn_82599ED8(void);
extern void fn_82599EE0(void);
extern void fn_82599EE8(void);
extern void fn_82BA02A8(void);
extern void fn_82D7E470(void);

void fn_82599F20(void)
{
    fn_82814360(".data", fn_82599B80, fn_82522D90, fn_82599C98);
    fn_82814360(".header", fn_82599C60, fn_82BA02A8, fn_82599C60);
    fn_82814360(".gpu", fn_82599EC0, fn_82599ED8, 0);
    fn_82814360(".texturegpu", fn_82599CD8, fn_82599DE8, 0);
    fn_82814360(".stream", fn_82599B80, fn_82522D90, 0);
    fn_82814360(".gpucached", fn_82599EC0, fn_82599ED8, 0);
    fn_82814360(".instance", fn_82599B80, fn_82522D90, fn_82599C98);
    fn_82814360(".drxml", fn_82599B80, fn_82522D90, fn_82599C98);
    fn_82815220(fn_82599EE0, fn_82599EE8, 0, fn_82D7E470, 0);
}
