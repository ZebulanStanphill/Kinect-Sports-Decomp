typedef struct Buffer_82BE6268 Buffer_82BE6268;

extern int fn_82BE6268(Buffer_82BE6268 *p, const void *data, int n);
extern int fn_82BE6328(Buffer_82BE6268 *p, const void *data, int n);

void fn_82BE6760(Buffer_82BE6268 *p, unsigned short v, int flag)
{
    if (flag)
        fn_82BE6328(p, &v, 2);
    else
        fn_82BE6268(p, &v, 2);
}
