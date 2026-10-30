namespace R1 {
namespace Soundscape {
namespace Maths {
class Spring_i {
public:
    virtual ~Spring_i() {}
};

class mathSpringBase_c : public Spring_i {
public:
    mathSpringBase_c();
    virtual ~mathSpringBase_c();
};

class mathSpringAngle_c : public mathSpringBase_c {
public:
    mathSpringAngle_c();
    virtual ~mathSpringAngle_c() {}
};

mathSpringAngle_c::mathSpringAngle_c()
{
}
}
}
}
