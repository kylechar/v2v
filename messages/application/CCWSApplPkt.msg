/* ============================================================================
 * V2V 802.11p / WAVE / WSMP / CCWS
 * Written by Kyle Charbonneau kyle.charbonneau (at) gmail  (dot) com
 * The University of Western Ontario
 * File: CCWSApplPkt.msg
 * Description: CCWS application layer packet
============================================================================ */

class ApplPkt;

cplusplus {{
#include "ApplPkt_m.h"
}};

packet CCWSApplPkt extends ApplPkt {
    int id;
    double x;
    double y;
    double speed;
    double angleX;
    double angleY;
    double accel;
    double width;
    double length;
    simtime_t utc;
    int id1;
    int id2;
    int id3;
    int id4;
}
