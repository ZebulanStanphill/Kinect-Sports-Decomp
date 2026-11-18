extern void fn_82823030(void *root, void **node);
extern void fn_82823080(void *node, void **child);
extern void fn_828230A8(void *node, void **sibling);
extern void fn_82823058(void *node, void **parent);

void fn_8282D640(void *context, void *root, void (*visit)(void *context, void *node), unsigned char skipVisit)
{
    void *previous;
    int done;
    unsigned int state;
    void *node;
    void *next;
    void *firstChild;

    previous = 0;
    done = 0;
    fn_82823030(root, &node);
    state = 0;
    do {
        switch (state) {
        case 0:
            fn_82823080(node, &next);
            if (next != 0) {
                node = next;
                state = 0;
            } else {
                if (!skipVisit) {
                    visit(context, node);
                }
                state = 1;
            }
            break;
        case 1:
            fn_828230A8(node, &next);
            if (next != 0 && next != previous) {
                node = next;
                state = 0;
            } else {
                state = 2;
            }
            break;
        case 2:
            fn_82823058(node, &next);
            if (next != 0) {
                state = 1;
                if (!skipVisit) {
                    fn_82823080(next, &firstChild);
                    if (firstChild == node) {
                        visit(context, next);
                    }
                }
                previous = node;
                node = next;
            } else {
                done = 1;
            }
            break;
        }
    } while (!done);
}
