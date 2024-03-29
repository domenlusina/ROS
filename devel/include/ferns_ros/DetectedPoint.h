// Generated by gencpp from file ferns_ros/DetectedPoint.msg
// DO NOT EDIT!


#ifndef FERNS_ROS_MESSAGE_DETECTEDPOINT_H
#define FERNS_ROS_MESSAGE_DETECTEDPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ferns_ros
{
template <class ContainerAllocator>
struct DetectedPoint_
{
  typedef DetectedPoint_<ContainerAllocator> Type;

  DetectedPoint_()
    : x(0)
    , y(0)  {
    }
  DetectedPoint_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)  {
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;




  typedef boost::shared_ptr< ::ferns_ros::DetectedPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ferns_ros::DetectedPoint_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedPoint_

typedef ::ferns_ros::DetectedPoint_<std::allocator<void> > DetectedPoint;

typedef boost::shared_ptr< ::ferns_ros::DetectedPoint > DetectedPointPtr;
typedef boost::shared_ptr< ::ferns_ros::DetectedPoint const> DetectedPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ferns_ros::DetectedPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ferns_ros::DetectedPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ferns_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ferns_ros': ['/home/team_nu/ROS/src/localizer/ferns_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ferns_ros::DetectedPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ferns_ros::DetectedPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ferns_ros::DetectedPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd7b43fd41d4c47bf5c703cc7d016709";
  }

  static const char* value(const ::ferns_ros::DetectedPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd7b43fd41d4c47bULL;
  static const uint64_t static_value2 = 0xf5c703cc7d016709ULL;
};

template<class ContainerAllocator>
struct DataType< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ferns_ros/DetectedPoint";
  }

  static const char* value(const ::ferns_ros::DetectedPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 												  x\n\
int32 													y\n\
";
  }

  static const char* value(const ::ferns_ros::DetectedPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct DetectedPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ferns_ros::DetectedPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ferns_ros::DetectedPoint_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FERNS_ROS_MESSAGE_DETECTEDPOINT_H
