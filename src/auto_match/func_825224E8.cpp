#include <vector>

struct Context_825224E8 {
    int pad[3];
    int references; /* 0x0c */
};

struct Request_825224E8 {
    int handle;                /* 0x00 */
    Context_825224E8 *context; /* 0x04 */
};

struct Element_82628520 {
    Request_825224E8 *request;
};

struct Object_825224E8 {
    virtual void slot0();
    virtual int create(int a, int b, int c, int d, Request_825224E8 *request);
    char lock[0x1c];                        /* 0x04 */
    std::vector<Element_82628520> requests; /* 0x20 */
};

extern "C" void *fn_82522D98(unsigned int);
extern "C" void RtlEnterCriticalSection(void *);
extern "C" void RtlLeaveCriticalSection(void *);

extern "C" Request_825224E8 *fn_825224E8(Object_825224E8 *self, int a, int b, int c, int d,
                                         Context_825224E8 *context)
{
    Element_82628520 element;
    ++context->references;
    element.request = (Request_825224E8 *)fn_82522D98(8);
    element.request->context = context;
    element.request->handle = self->create(a, b, c, d, element.request);
    RtlEnterCriticalSection(self->lock);
    self->requests.push_back(element);
    RtlLeaveCriticalSection(self->lock);
    return element.request;
}
