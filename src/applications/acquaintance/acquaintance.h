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
  static const string KNOW;
  static const string KNOWEVENT;
  static const string LIKE;
  static const string LIKEEVENT;
  static const string LIVE;
  static const string LIVEEVENT;
  static const string RELATION;

  static TypeId GetTypeId (void);

  Acquaintance ();

  virtual ~Acquaintance ();

protected:

  virtual void DoDispose (void);

  virtual void StartApplication (void);

  virtual void StopApplication (void);

  virtual void InitDatabase (void);

  virtual void DemuxRecv (Ptr<Tuple> tuple);

  virtual void RaEca0Ins (Ptr<Tuple> liveEvent);

  virtual void RaEca0Del (Ptr<Tuple> liveEvent);

  virtual void RbEca0Ins (Ptr<Tuple> likeEvent);

  virtual void RbEca0Del (Ptr<Tuple> likeEvent);

  virtual void RcEca0Ins (Ptr<Tuple> knowEvent);

  virtual void RcEca0Del (Ptr<Tuple> knowEvent);

  virtual void R1Eca0Ins (Ptr<Tuple> liveEvent);

  virtual void R1Eca0Del (Ptr<Tuple> liveEvent);

  virtual void R1Eca1Ins (Ptr<Tuple> live);

  virtual void R1Eca1Del (Ptr<Tuple> live);

  virtual void R2Eca0Ins (Ptr<Tuple> likeEvent);

  virtual void R2Eca0Del (Ptr<Tuple> likeEvent);

  virtual void R2Eca1Ins (Ptr<Tuple> like);

  virtual void R2Eca1Del (Ptr<Tuple> like);

  virtual void R4Eca0Ins (Ptr<Tuple> relation);

  virtual void R4Eca0Del (Ptr<Tuple> relation);

  virtual void R5Eca0Ins (Ptr<Tuple> liveEvent);

  virtual void R5Eca0Del (Ptr<Tuple> liveEvent);

  virtual void R5Eca1Ins (Ptr<Tuple> live);

  virtual void R5Eca1Del (Ptr<Tuple> live);

};

} // namespace acquaintance
} // namespace rapidnet
} // namespace ns3

#endif // ACQUAINTANCE_H
