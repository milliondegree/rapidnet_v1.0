/* A RapidNet application. Generated by RapidNet compiler. */

#ifndef ACQUAINTANCE_H
#define ACQUAINTANCE_H

#include <string>
#include <iostream>
#include "ns3/ptr.h"
#include "ns3/event-id.h"
#include "ns3/ipv4-address.h"
#include "ns3/rapidnet-header.h"
#include "ns3/relation-base.h"
#include "ns3/database.h"
#include "ns3/rapidnet-application-base.h"
#include "ns3/aggregator.h"
#include "ns3/aggwrap.h"

using namespace std;
using namespace ns3;

namespace ns3 {

class Socket;
class Packet;

namespace rapidnet {
namespace acquaintance {

class Acquaintance : public RapidNetApplicationBase
{
public:
  static const string EPRETURN;
  static const string EPROVQUERY;
  static const string ERRETURN;
  static const string ERULEQUERY;
  static const string EKNOW;
  static const string EKNOWDELETE;
  static const string EKNOWEVENT;
  static const string EKNOWEVENTDELETE;
  static const string EKNOWEVENTTEMP;
  static const string EKNOWEVENTTEMPDELETE;
  static const string EKNOWTEMP;
  static const string EKNOWTEMPDELETE;
  static const string ELIKE;
  static const string ELIKEDELETE;
  static const string ELIKETEMP;
  static const string ELIKETEMPDELETE;
  static const string ELIVE;
  static const string ELIVEDELETE;
  static const string ELIVETEMP;
  static const string ELIVETEMPDELETE;
  static const string ESHARESULT;
  static const string ESHARESULTDELETE;
  static const string ESHARESULTTEMP;
  static const string ESHARESULTTEMPDELETE;
  static const string KNOW;
  static const string KNOWEVENT;
  static const string LIKE;
  static const string LIKEEVENT;
  static const string LIVE;
  static const string LIVEEVENT;
  static const string PITERATE;
  static const string PQLIST;
  static const string PRESULTTMP;
  static const string PRETURN;
  static const string PROV;
  static const string PROVQUERY;
  static const string RITERATE;
  static const string RQLIST;
  static const string RRESULTTMP;
  static const string RRETURN;
  static const string RELATION;
  static const string RULEEXEC;
  static const string RULEQUERY;
  static const string SHARESULT;

  static TypeId GetTypeId (void);

  Acquaintance ();

  virtual ~Acquaintance ();

protected:

  virtual void DoDispose (void);

  virtual void StartApplication (void);

  virtual void StopApplication (void);

  virtual void InitDatabase (void);

  virtual void DemuxRecv (Ptr<Tuple> tuple);

  virtual void Prov_ra_1Eca0Ins (Ptr<Tuple> liveEvent);

  virtual void Prov_ra_1Eca0Del (Ptr<Tuple> liveEvent);

  virtual void Prov_ra_2_ecaAdd (Ptr<Tuple> eliveTemp);

  virtual void Prov_ra_2_ecaDel (Ptr<Tuple> eliveTempDelete);

  virtual void Prov_ra_3_ecaAdd (Ptr<Tuple> eliveTemp);

  virtual void Prov_ra_3_ecaDel (Ptr<Tuple> eliveTempDelete);

  virtual void Prov_ra_4_ecaAdd (Ptr<Tuple> elive);

  virtual void Prov_ra_4_ecaDel (Ptr<Tuple> eliveDelete);

  virtual void Prov_ra_5_ecaAdd (Ptr<Tuple> elive);

  virtual void Prov_ra_5_ecaDel (Ptr<Tuple> eliveDelete);

  virtual void Prov_rb_1Eca0Ins (Ptr<Tuple> likeEvent);

  virtual void Prov_rb_1Eca0Del (Ptr<Tuple> likeEvent);

  virtual void Prov_rb_2_ecaAdd (Ptr<Tuple> elikeTemp);

  virtual void Prov_rb_2_ecaDel (Ptr<Tuple> elikeTempDelete);

  virtual void Prov_rb_3_ecaAdd (Ptr<Tuple> elikeTemp);

  virtual void Prov_rb_3_ecaDel (Ptr<Tuple> elikeTempDelete);

  virtual void Prov_rb_4_ecaAdd (Ptr<Tuple> elike);

  virtual void Prov_rb_4_ecaDel (Ptr<Tuple> elikeDelete);

  virtual void Prov_rb_5_ecaAdd (Ptr<Tuple> elike);

  virtual void Prov_rb_5_ecaDel (Ptr<Tuple> elikeDelete);

  virtual void Prov_rc_1Eca0Ins (Ptr<Tuple> knowEvent);

  virtual void Prov_rc_1Eca0Del (Ptr<Tuple> knowEvent);

  virtual void Prov_rc_2_ecaAdd (Ptr<Tuple> eknowTemp);

  virtual void Prov_rc_2_ecaDel (Ptr<Tuple> eknowTempDelete);

  virtual void Prov_rc_3_ecaAdd (Ptr<Tuple> eknowTemp);

  virtual void Prov_rc_3_ecaDel (Ptr<Tuple> eknowTempDelete);

  virtual void Prov_rc_4_ecaAdd (Ptr<Tuple> eknow);

  virtual void Prov_rc_4_ecaDel (Ptr<Tuple> eknowDelete);

  virtual void Prov_rc_5_ecaAdd (Ptr<Tuple> eknow);

  virtual void Prov_rc_5_ecaDel (Ptr<Tuple> eknowDelete);

  virtual void Prov_rd_1Eca0Ins (Ptr<Tuple> knowEvent);

  virtual void Prov_rd_1Eca0Del (Ptr<Tuple> knowEvent);

  virtual void Prov_r1_1Eca0Ins (Ptr<Tuple> liveEvent);

  virtual void Prov_r1_1Eca0Del (Ptr<Tuple> liveEvent);

  virtual void Prov_r1_1Eca3Ins (Ptr<Tuple> live);

  virtual void Prov_r1_1Eca3Del (Ptr<Tuple> live);

  virtual void Prov_r1_2_ecaAdd (Ptr<Tuple> eknowEventTemp);

  virtual void Prov_r1_2_ecaDel (Ptr<Tuple> eknowEventTempDelete);

  virtual void Prov_r1_3_ecaAdd (Ptr<Tuple> eknowEventTemp);

  virtual void Prov_r1_3_ecaDel (Ptr<Tuple> eknowEventTempDelete);

  virtual void Prov_r1_4_ecaAdd (Ptr<Tuple> eknowEvent);

  virtual void Prov_r1_4_ecaDel (Ptr<Tuple> eknowEventDelete);

  virtual void Prov_r1_5_ecaAdd (Ptr<Tuple> eknowEvent);

  virtual void Prov_r1_5_ecaDel (Ptr<Tuple> eknowEventDelete);

  virtual void Prov_r2_1Eca0Ins (Ptr<Tuple> likeEvent);

  virtual void Prov_r2_1Eca0Del (Ptr<Tuple> likeEvent);

  virtual void Prov_r2_1Eca3Ins (Ptr<Tuple> like);

  virtual void Prov_r2_1Eca3Del (Ptr<Tuple> like);

  virtual void Prov_r4_1Eca0Ins (Ptr<Tuple> relation);

  virtual void Prov_r4_1Eca0Del (Ptr<Tuple> relation);

  virtual void Prov_r5_1Eca0Ins (Ptr<Tuple> liveEvent);

  virtual void Prov_r5_1Eca0Del (Ptr<Tuple> liveEvent);

  virtual void Prov_r5_1Eca3Ins (Ptr<Tuple> live);

  virtual void Prov_r5_1Eca3Del (Ptr<Tuple> live);

  virtual void Prov_r6_1Eca0Ins (Ptr<Tuple> liveEvent);

  virtual void Prov_r6_1Eca0Del (Ptr<Tuple> liveEvent);

  virtual void Prov_r6_2_ecaAdd (Ptr<Tuple> eshaResultTemp);

  virtual void Prov_r6_2_ecaDel (Ptr<Tuple> eshaResultTempDelete);

  virtual void Prov_r6_3_ecaAdd (Ptr<Tuple> eshaResultTemp);

  virtual void Prov_r6_3_ecaDel (Ptr<Tuple> eshaResultTempDelete);

  virtual void Prov_r6_4_ecaAdd (Ptr<Tuple> eshaResult);

  virtual void Prov_r6_4_ecaDel (Ptr<Tuple> eshaResultDelete);

  virtual void Prov_r6_5_ecaAdd (Ptr<Tuple> eshaResult);

  virtual void Prov_r6_5_ecaDel (Ptr<Tuple> eshaResultDelete);

  virtual void Prov_r7_1Eca0Ins (Ptr<Tuple> likeEvent);

  virtual void Prov_r7_1Eca0Del (Ptr<Tuple> likeEvent);

  virtual void Prov_r8_1Eca0Ins (Ptr<Tuple> knowEvent);

  virtual void Prov_r8_1Eca0Del (Ptr<Tuple> knowEvent);

  virtual void Prov_r9_1Eca0Ins (Ptr<Tuple> relation);

  virtual void Prov_r9_1Eca0Del (Ptr<Tuple> relation);

  virtual void Prov_r10_1Eca0Ins (Ptr<Tuple> live);

  virtual void Prov_r10_1Eca0Del (Ptr<Tuple> live);

  virtual void Prov_r11_1Eca0Ins (Ptr<Tuple> like);

  virtual void Prov_r11_1Eca0Del (Ptr<Tuple> like);

  virtual void Prov_r12_1Eca0Ins (Ptr<Tuple> know);

  virtual void Prov_r12_1Eca0Del (Ptr<Tuple> know);

  virtual void Prov_r13_1Eca0Ins (Ptr<Tuple> knowEvent);

  virtual void Prov_r13_1Eca0Del (Ptr<Tuple> knowEvent);

  virtual void Prov_r13_1Eca3Ins (Ptr<Tuple> know);

  virtual void Prov_r13_1Eca3Del (Ptr<Tuple> know);

  virtual void Prov_edb_1Eca1Ins (Ptr<Tuple> likeEvent);

  virtual void Prov_edb_1Eca1Del (Ptr<Tuple> likeEvent);

  virtual void Prov_edb_2Eca1Ins (Ptr<Tuple> liveEvent);

  virtual void Prov_edb_2Eca1Del (Ptr<Tuple> liveEvent);

  virtual void Prov_edb_3Eca1Ins (Ptr<Tuple> relation);

  virtual void Prov_edb_3Eca1Del (Ptr<Tuple> relation);

  virtual void Edb1_eca (Ptr<Tuple> provQuery);

  virtual void Idb1_eca (Ptr<Tuple> provQuery);

  virtual void Idb2_eca (Ptr<Tuple> provQuery);

  virtual void Idb3_eca (Ptr<Tuple> provQuery);

  virtual void Idb4_eca (Ptr<Tuple> pIterate);

  virtual void Idb5_eca (Ptr<Tuple> pIterate);

  virtual void Idb6_eca (Ptr<Tuple> eRuleQuery);

  virtual void Idb7_eca (Ptr<Tuple> rReturn);

  virtual void Idb8Eca0Ins (Ptr<Tuple> pResultTmp);

  virtual void Idb8Eca1Ins (Ptr<Tuple> pQList);

  virtual void Idb9_eca (Ptr<Tuple> ePReturn);

  virtual void Rv1_eca (Ptr<Tuple> ruleQuery);

  virtual void Rv2_eca (Ptr<Tuple> ruleQuery);

  virtual void Rv3_eca (Ptr<Tuple> ruleQuery);

  virtual void Rv4_eca (Ptr<Tuple> rIterate);

  virtual void Rv5_eca (Ptr<Tuple> rIterate);

  virtual void Rv6_eca (Ptr<Tuple> eProvQuery);

  virtual void Rv7_eca (Ptr<Tuple> pReturn);

  virtual void Rv8Eca0Ins (Ptr<Tuple> rResultTmp);

  virtual void Rv8Eca1Ins (Ptr<Tuple> rQList);

  virtual void Rv9_eca (Ptr<Tuple> eRReturn);

};

} // namespace acquaintance
} // namespace rapidnet
} // namespace ns3

#endif // ACQUAINTANCE_H
