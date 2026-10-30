extern "C" void fn_8265CA20(void *p);
class GTextureImplNode { public: virtual ~GTextureImplNode() {} }; 
extern "C" GTextureImplNode *fn_8267B3E8(GTextureImplNode *self, unsigned int flags)
{
    self->GTextureImplNode::~GTextureImplNode();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
