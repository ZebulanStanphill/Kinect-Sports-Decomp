struct Unk_82E439A0 {
    virtual long QueryInterface(const void *iid, void *out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
    virtual void v0c();
    virtual void v10();
    virtual long Connect(Unk_82E439A0 *other, int flags);
    virtual void v18();
    virtual long Find(const void *id, Unk_82E439A0 **out);
};

struct Obj_82E439A0 {
    char pad0[0x10];
    char sub10[8];
    Unk_82E439A0 *source;
    void *f1c;
    char pad20[0x5c];
    void *f7c;
    void *f80;
    char pad84[0x6c];
    __int64 ff0;
    char padf8[8];
    int f100;
    int f104;
};

extern "C" char lbl_820ED018[];
extern "C" char lbl_82154C18[];
extern "C" char lbl_82154C58[];
extern "C" char lbl_821549B8[];
extern "C" char lbl_82154C68[];
extern "C" long fn_82E7B810(void *p);

extern "C" long fn_82E439A0(Obj_82E439A0 *o)
{
    Unk_82E439A0 *node;
    Unk_82E439A0 *graph;
    long hr;

    o->ff0 = 0;
    o->f100 = 0;
    o->f104 = 0;
    node = 0;
    graph = 0;
    hr = o->source->Find(lbl_820ED018, &node);
    if (hr < 0) {
        goto done;
    }
    hr = o->source->QueryInterface(lbl_82154C18, &graph);
    if (hr < 0) {
        goto done;
    }
    hr = graph->Connect(node, 0);
    if (hr < 0) {
        goto done;
    }
    hr = node->QueryInterface(lbl_82154C58, &o->f7c);
    if (hr < 0) {
        goto done;
    }
    hr = node->QueryInterface(lbl_82154C18, &o->f1c);
    if (hr < 0) {
        goto done;
    }
    if (node != 0) {
        node->Release();
        node = 0;
    }
    hr = o->source->Find(lbl_821549B8, &node);
    if (hr < 0) {
        goto done;
    }
    hr = graph->Connect(node, 0);
    if (hr < 0) {
        goto done;
    }
    hr = node->QueryInterface(lbl_82154C68, &o->f80);
    if (hr < 0) {
        goto done;
    }
    hr = fn_82E7B810(o->sub10);
done:
    if (node != 0) {
        node->Release();
        node = 0;
    }
    if (graph != 0) {
        graph->Release();
    }
    return hr;
}
