// Generated by gencpp from file visual_servoing/CameraObjectsStamped.msg
// DO NOT EDIT!


#ifndef VISUAL_SERVOING_MESSAGE_CAMERAOBJECTSSTAMPED_H
#define VISUAL_SERVOING_MESSAGE_CAMERAOBJECTSSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <visual_servoing/CameraObject.h>

namespace visual_servoing
{
template <class ContainerAllocator>
struct CameraObjectsStamped_
{
  typedef CameraObjectsStamped_<ContainerAllocator> Type;

  CameraObjectsStamped_()
    : header()
    , objects()  {
    }
  CameraObjectsStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , objects(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::visual_servoing::CameraObject_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visual_servoing::CameraObject_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;




  typedef boost::shared_ptr< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> const> ConstPtr;

}; // struct CameraObjectsStamped_

typedef ::visual_servoing::CameraObjectsStamped_<std::allocator<void> > CameraObjectsStamped;

typedef boost::shared_ptr< ::visual_servoing::CameraObjectsStamped > CameraObjectsStampedPtr;
typedef boost::shared_ptr< ::visual_servoing::CameraObjectsStamped const> CameraObjectsStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace visual_servoing

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'visual_servoing': ['/home/racecar/team-ws/src/racecar/visual_servoing/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b0bdfe879d8fa2c0145283a6281f997";
  }

  static const char* value(const ::visual_servoing::CameraObjectsStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b0bdfe879d8fa2cULL;
  static const uint64_t static_value2 = 0x0145283a6281f997ULL;
};

template<class ContainerAllocator>
struct DataType< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "visual_servoing/CameraObjectsStamped";
  }

  static const char* value(const ::visual_servoing::CameraObjectsStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
CameraObject[] objects\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: visual_servoing/CameraObject\n\
string label\n\
geometry_msgs/Point center  # in pixels, from center (haha, maybe not really)\n\
geometry_msgs/Vector3 size  # in pixels\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::visual_servoing::CameraObjectsStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CameraObjectsStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visual_servoing::CameraObjectsStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::visual_servoing::CameraObjectsStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::visual_servoing::CameraObject_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISUAL_SERVOING_MESSAGE_CAMERAOBJECTSSTAMPED_H
