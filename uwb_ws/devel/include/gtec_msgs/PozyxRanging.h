// Generated by gencpp from file gtec_msgs/PozyxRanging.msg
// DO NOT EDIT!


#ifndef GTEC_MSGS_MESSAGE_POZYXRANGING_H
#define GTEC_MSGS_MESSAGE_POZYXRANGING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gtec_msgs
{
template <class ContainerAllocator>
struct PozyxRanging_
{
  typedef PozyxRanging_<ContainerAllocator> Type;

  PozyxRanging_()
    : originId(0)
    , originType(0)
    , destinationId(0)
    , destinationType(0)
    , range(0)
    , ts(0)
    , seq(0)
    , rxPower(0.0)
    , channel(0.0)
    , datarate(0.0)
    , prf(0)
    , preambleLength(0)
    , txGain(0.0)
    , angle(0.0)  {
    }
  PozyxRanging_(const ContainerAllocator& _alloc)
    : originId(0)
    , originType(0)
    , destinationId(0)
    , destinationType(0)
    , range(0)
    , ts(0)
    , seq(0)
    , rxPower(0.0)
    , channel(0.0)
    , datarate(0.0)
    , prf(0)
    , preambleLength(0)
    , txGain(0.0)
    , angle(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _originId_type;
  _originId_type originId;

   typedef int16_t _originType_type;
  _originType_type originType;

   typedef int32_t _destinationId_type;
  _destinationId_type destinationId;

   typedef int16_t _destinationType_type;
  _destinationType_type destinationType;

   typedef int32_t _range_type;
  _range_type range;

   typedef int32_t _ts_type;
  _ts_type ts;

   typedef int32_t _seq_type;
  _seq_type seq;

   typedef double _rxPower_type;
  _rxPower_type rxPower;

   typedef double _channel_type;
  _channel_type channel;

   typedef double _datarate_type;
  _datarate_type datarate;

   typedef int32_t _prf_type;
  _prf_type prf;

   typedef int32_t _preambleLength_type;
  _preambleLength_type preambleLength;

   typedef double _txGain_type;
  _txGain_type txGain;

   typedef double _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::gtec_msgs::PozyxRanging_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gtec_msgs::PozyxRanging_<ContainerAllocator> const> ConstPtr;

}; // struct PozyxRanging_

typedef ::gtec_msgs::PozyxRanging_<std::allocator<void> > PozyxRanging;

typedef boost::shared_ptr< ::gtec_msgs::PozyxRanging > PozyxRangingPtr;
typedef boost::shared_ptr< ::gtec_msgs::PozyxRanging const> PozyxRangingConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gtec_msgs::PozyxRanging_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gtec_msgs::PozyxRanging_<ContainerAllocator1> & lhs, const ::gtec_msgs::PozyxRanging_<ContainerAllocator2> & rhs)
{
  return lhs.originId == rhs.originId &&
    lhs.originType == rhs.originType &&
    lhs.destinationId == rhs.destinationId &&
    lhs.destinationType == rhs.destinationType &&
    lhs.range == rhs.range &&
    lhs.ts == rhs.ts &&
    lhs.seq == rhs.seq &&
    lhs.rxPower == rhs.rxPower &&
    lhs.channel == rhs.channel &&
    lhs.datarate == rhs.datarate &&
    lhs.prf == rhs.prf &&
    lhs.preambleLength == rhs.preambleLength &&
    lhs.txGain == rhs.txGain &&
    lhs.angle == rhs.angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gtec_msgs::PozyxRanging_<ContainerAllocator1> & lhs, const ::gtec_msgs::PozyxRanging_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gtec_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gtec_msgs::PozyxRanging_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gtec_msgs::PozyxRanging_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gtec_msgs::PozyxRanging_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b846533027dd07c0ff5d2424addc37b";
  }

  static const char* value(const ::gtec_msgs::PozyxRanging_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b846533027dd07cULL;
  static const uint64_t static_value2 = 0x0ff5d2424addc37bULL;
};

template<class ContainerAllocator>
struct DataType< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gtec_msgs/PozyxRanging";
  }

  static const char* value(const ::gtec_msgs::PozyxRanging_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 originId\n"
"int16 originType\n"
"int32 destinationId\n"
"int16 destinationType\n"
"int32 range\n"
"int32 ts\n"
"int32 seq\n"
"float64 rxPower\n"
"float64 channel\n"
"float64 datarate\n"
"int32 prf\n"
"int32 preambleLength\n"
"float64 txGain\n"
"float64 angle\n"
;
  }

  static const char* value(const ::gtec_msgs::PozyxRanging_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.originId);
      stream.next(m.originType);
      stream.next(m.destinationId);
      stream.next(m.destinationType);
      stream.next(m.range);
      stream.next(m.ts);
      stream.next(m.seq);
      stream.next(m.rxPower);
      stream.next(m.channel);
      stream.next(m.datarate);
      stream.next(m.prf);
      stream.next(m.preambleLength);
      stream.next(m.txGain);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PozyxRanging_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gtec_msgs::PozyxRanging_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gtec_msgs::PozyxRanging_<ContainerAllocator>& v)
  {
    s << indent << "originId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.originId);
    s << indent << "originType: ";
    Printer<int16_t>::stream(s, indent + "  ", v.originType);
    s << indent << "destinationId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.destinationId);
    s << indent << "destinationType: ";
    Printer<int16_t>::stream(s, indent + "  ", v.destinationType);
    s << indent << "range: ";
    Printer<int32_t>::stream(s, indent + "  ", v.range);
    s << indent << "ts: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ts);
    s << indent << "seq: ";
    Printer<int32_t>::stream(s, indent + "  ", v.seq);
    s << indent << "rxPower: ";
    Printer<double>::stream(s, indent + "  ", v.rxPower);
    s << indent << "channel: ";
    Printer<double>::stream(s, indent + "  ", v.channel);
    s << indent << "datarate: ";
    Printer<double>::stream(s, indent + "  ", v.datarate);
    s << indent << "prf: ";
    Printer<int32_t>::stream(s, indent + "  ", v.prf);
    s << indent << "preambleLength: ";
    Printer<int32_t>::stream(s, indent + "  ", v.preambleLength);
    s << indent << "txGain: ";
    Printer<double>::stream(s, indent + "  ", v.txGain);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GTEC_MSGS_MESSAGE_POZYXRANGING_H
