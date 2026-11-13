extern void fn_82839358(void *arg);
extern void fn_8283CAD8(void *arg);
extern void fn_82839E88(void *arg);

void fn_8283F728(unsigned int *kind, void *arg)
{

    switch (*kind) {
    case 0:
        fn_82839358(arg);
        break;
    case 2:
        fn_82839358(arg);
        break;
    case 1:
        fn_8283CAD8(arg);
        break;
    case 3:
        fn_82839E88(arg);
        break;
    }
}
