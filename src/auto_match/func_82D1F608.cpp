#include "havok/hkBase.h"
namespace hkgpMesh {
 class IConvexOverlap {public: class IConvexShape {public: virtual ~IConvexShape() {} };};
 class ConvexHullShape: public IConvexOverlap::IConvexShape {public: ConvexHullShape(void*p):hull(p){} void* hull;};
}
class Overlap {public: virtual void pad();virtual double test(void*,hkgpMesh::IConvexOverlap::IConvexShape*,int);};
struct Context {char pad[0x38];Overlap* overlap;};
extern "C" int fn_82D1F608(Context* ctx,void* shape,hkArrayBase<void*>* hulls,float threshold) {
 for(int i=0;i<hulls->m_size;i++) { hkgpMesh::ConvexHullShape hull(hulls->m_data[i]); if(ctx->overlap->test(shape,&hull,1)<threshold) return 1; }
 return 0;
}
