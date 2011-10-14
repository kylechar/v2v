//
// Generated file, do not edit! Created by opp_msgc 4.1 from messages/netw/WSMPkt.msg.
//

#ifndef _WSMPKT_M_H_
#define _WSMPKT_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "NetwPkt_m.h"
// }}



/**
 * Class generated from <tt>messages/netw/WSMPkt.msg</tt> by opp_msgc.
 * <pre>
 * packet WSMPkt extends NetwPkt {
 *     int chNum;
 *     int dataRate;
 *     int appPSI;
 *     int txPower;
 * 	int length;
 * }
 * </pre>
 */
class WSMPkt : public ::NetwPkt
{
  protected:
    int chNum_var;
    int dataRate_var;
    int appPSI_var;
    int txPower_var;
    int length_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WSMPkt&);

  public:
    WSMPkt(const char *name=NULL, int kind=0);
    WSMPkt(const WSMPkt& other);
    virtual ~WSMPkt();
    WSMPkt& operator=(const WSMPkt& other);
    virtual WSMPkt *dup() const {return new WSMPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getChNum() const;
    virtual void setChNum(int chNum_var);
    virtual int getDataRate() const;
    virtual void setDataRate(int dataRate_var);
    virtual int getAppPSI() const;
    virtual void setAppPSI(int appPSI_var);
    virtual int getTxPower() const;
    virtual void setTxPower(int txPower_var);
    virtual int getLength() const;
    virtual void setLength(int length_var);
};

inline void doPacking(cCommBuffer *b, WSMPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, WSMPkt& obj) {obj.parsimUnpack(b);}


#endif // _WSMPKT_M_H_
