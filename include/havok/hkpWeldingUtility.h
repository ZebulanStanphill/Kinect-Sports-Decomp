// hkpWeldingUtility (Physics/Collide/Util/Welding/hkpWeldingUtility.h): the edge welding helpers. Only its enums
// are declared here: the names and values are those of the game's hkClassEnum tables (hkClass initialiser
// 8312F2A8: WeldingType lbl_82137B54, SectorType lbl_82137B74, NumAngles lbl_82137B9C). The mesh shapes store
// WELDING_TYPE_NONE in their constructors (82D43238, 82D45E48).
#ifndef HAVOK_HKPWELDINGUTILITY_H
#define HAVOK_HKPWELDINGUTILITY_H

class hkpWeldingUtility {
public:
    enum WeldingType {
        WELDING_TYPE_ANTICLOCKWISE = 0,
        WELDING_TYPE_CLOCKWISE = 4,
        WELDING_TYPE_TWO_SIDED = 5,
        WELDING_TYPE_NONE = 6
    };
    enum SectorType {
        ACCEPT_0 = 1,
        SNAP_0 = 0,
        REJECT = 2,
        SNAP_1 = 4,
        ACCEPT_1 = 3
    };
    enum NumAngles {
        NUM_ANGLES = 31
    };
};

#endif
