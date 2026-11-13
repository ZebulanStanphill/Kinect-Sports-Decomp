typedef struct Graph_82BD0730 {
    char pad0[0x10];
    int node_count;
} Graph_82BD0730;

extern int *lbl_83223EC4;
extern int fn_82BD3440(int node, int *map);
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);

int fn_82BD0730(Graph_82BD0730 *self, int node, unsigned char find)
{
    if (find) {
        int leaf = fn_82BD3440(node, lbl_83223EC4);
        if (!(leaf < self->node_count)) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "leaf < node_count", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\interference.cpp", 0x27e);
        }
        return leaf;
    }
    return lbl_83223EC4[node];
}
