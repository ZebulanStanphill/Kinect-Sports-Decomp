extern int *_errno(void);

void fn_82F78F98(int type)
{
    switch (type) {
    case 1:
        *_errno() = 33;   /* EDOM */
        break;
    case 2:
    case 3:
        *_errno() = 34;   /* ERANGE */
        break;
    }
}
