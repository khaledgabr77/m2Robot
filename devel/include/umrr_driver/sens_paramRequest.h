// Generated by gencpp from file umrr_driver/sens_paramRequest.msg
// DO NOT EDIT!


#ifndef UMRR_DRIVER_MESSAGE_SENS_PARAMREQUEST_H
#define UMRR_DRIVER_MESSAGE_SENS_PARAMREQUEST_H


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
struct sens_paramRequest_
{
  typedef sens_paramRequest_<ContainerAllocator> Type;

  sens_paramRequest_()
    : section(0)
    , param(0)
    , value(0)
    , dim(0)  {
    }
  sens_paramRequest_(const ContainerAllocator& _alloc)
    : section(0)
    , param(0)
    , value(0)
    , dim(0)  {
  (void)_alloc;
    }



   typedef int32_t _section_type;
  _section_type section;

   typedef int32_t _param_type;
  _param_type param;

   typedef int32_t _value_type;
  _value_type value;

   typedef int32_t _dim_type;
  _dim_type dim;





  typedef boost::shared_ptr< ::umrr_driver::sens_paramRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::umrr_driver::sens_paramRequest_<ContainerAllocator> const> ConstPtr;

}; // struct sens_paramRequest_

typedef ::umrr_driver::sens_paramRequest_<std::allocator<void> > sens_paramRequest;

typedef boost::shared_ptr< ::umrr_driver::sens_paramRequest > sens_paramRequestPtr;
typedef boost::shared_ptr< ::umrr_driver::sens_paramRequest const> sens_paramRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::umrr_driver::sens_paramRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::umrr_driver::sens_paramRequest_<ContainerAllocator1> & lhs, const ::umrr_driver::sens_paramRequest_<ContainerAllocator2> & rhs)
{
  return lhs.section == rhs.section &&
    lhs.param == rhs.param &&
    lhs.value == rhs.value &&
    lhs.dim == rhs.dim;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::umrr_driver::sens_paramRequest_<ContainerAllocator1> & lhs, const ::umrr_driver::sens_paramRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace umrr_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::umrr_driver::sens_paramRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::umrr_driver::sens_paramRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::umrr_driver::sens_paramRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c99ff11b99dc85ed748bf934bb5d14bf";
  }

  static const char* value(const ::umrr_driver::sens_paramRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc99ff11b99dc85edULL;
  static const uint64_t static_value2 = 0x748bf934bb5d14bfULL;
};

template<class ContainerAllocator>
struct DataType< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "umrr_driver/sens_paramRequest";
  }

  static const char* value(const ::umrr_driver::sens_paramRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 section\n"
"int32 param\n"
"int32 value\n"
"int32 dim\n"
;
  }

  static const char* value(const ::umrr_driver::sens_paramRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.section);
      stream.next(m.param);
      stream.next(m.value);
      stream.next(m.dim);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sens_paramRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::umrr_driver::sens_paramRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::umrr_driver::sens_paramRequest_<ContainerAllocator>& v)
  {
    s << indent << "section: ";
    Printer<int32_t>::stream(s, indent + "  ", v.section);
    s << indent << "param: ";
    Printer<int32_t>::stream(s, indent + "  ", v.param);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
    s << indent << "dim: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dim);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UMRR_DRIVER_MESSAGE_SENS_PARAMREQUEST_H
