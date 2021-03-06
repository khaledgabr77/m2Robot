// Generated by gencpp from file umrr_driver/sens_statusResponse.msg
// DO NOT EDIT!


#ifndef UMRR_DRIVER_MESSAGE_SENS_STATUSRESPONSE_H
#define UMRR_DRIVER_MESSAGE_SENS_STATUSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace umrr_driver
{
template <class ContainerAllocator>
struct sens_statusResponse_
{
  typedef sens_statusResponse_<ContainerAllocator> Type;

  sens_statusResponse_()
    : resp()  {
    }
  sens_statusResponse_(const ContainerAllocator& _alloc)
    : resp(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _resp_type;
  _resp_type resp;





  typedef boost::shared_ptr< ::umrr_driver::sens_statusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::umrr_driver::sens_statusResponse_<ContainerAllocator> const> ConstPtr;

}; // struct sens_statusResponse_

typedef ::umrr_driver::sens_statusResponse_<std::allocator<void> > sens_statusResponse;

typedef boost::shared_ptr< ::umrr_driver::sens_statusResponse > sens_statusResponsePtr;
typedef boost::shared_ptr< ::umrr_driver::sens_statusResponse const> sens_statusResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::umrr_driver::sens_statusResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::umrr_driver::sens_statusResponse_<ContainerAllocator1> & lhs, const ::umrr_driver::sens_statusResponse_<ContainerAllocator2> & rhs)
{
  return lhs.resp == rhs.resp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::umrr_driver::sens_statusResponse_<ContainerAllocator1> & lhs, const ::umrr_driver::sens_statusResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace umrr_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::umrr_driver::sens_statusResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::umrr_driver::sens_statusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::umrr_driver::sens_statusResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b791c1a4a4f0cee32b54dd1a73706a59";
  }

  static const char* value(const ::umrr_driver::sens_statusResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb791c1a4a4f0cee3ULL;
  static const uint64_t static_value2 = 0x2b54dd1a73706a59ULL;
};

template<class ContainerAllocator>
struct DataType< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "umrr_driver/sens_statusResponse";
  }

  static const char* value(const ::umrr_driver::sens_statusResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string resp\n"
"\n"
;
  }

  static const char* value(const ::umrr_driver::sens_statusResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.resp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sens_statusResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::umrr_driver::sens_statusResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::umrr_driver::sens_statusResponse_<ContainerAllocator>& v)
  {
    s << indent << "resp: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.resp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UMRR_DRIVER_MESSAGE_SENS_STATUSRESPONSE_H
