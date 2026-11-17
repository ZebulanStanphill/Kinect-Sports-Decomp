extern void fn_8280F300(float, float, float, void *, unsigned int);

void fn_82810158(float first, float second, float third, void *out, unsigned int order)
{
    switch (order) {
    case 0:
        fn_8280F300(first, second, third, out, 0);
        break;
    case 1:
        fn_8280F300(second, third, first, out, 1);
        break;
    case 2:
        fn_8280F300(third, first, second, out, 2);
        break;
    case 4:
        fn_8280F300(first, third, second, out, 4);
        break;
    case 5:
        fn_8280F300(second, first, third, out, 5);
        break;
    case 6:
        fn_8280F300(third, second, first, out, 6);
        break;
    }
}
