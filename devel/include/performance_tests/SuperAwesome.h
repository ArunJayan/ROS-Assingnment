// Generated by gencpp from file performance_tests/SuperAwesome.msg
// DO NOT EDIT!


#ifndef PERFORMANCE_TESTS_MESSAGE_SUPERAWESOME_H
#define PERFORMANCE_TESTS_MESSAGE_SUPERAWESOME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace performance_tests
{
template <class ContainerAllocator>
struct SuperAwesome_
{
  typedef SuperAwesome_<ContainerAllocator> Type;

  SuperAwesome_()
    : str()  {
    }
  SuperAwesome_(const ContainerAllocator& _alloc)
    : str(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _str_type;
  _str_type str;





  typedef boost::shared_ptr< ::performance_tests::SuperAwesome_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::performance_tests::SuperAwesome_<ContainerAllocator> const> ConstPtr;

}; // struct SuperAwesome_

typedef ::performance_tests::SuperAwesome_<std::allocator<void> > SuperAwesome;

typedef boost::shared_ptr< ::performance_tests::SuperAwesome > SuperAwesomePtr;
typedef boost::shared_ptr< ::performance_tests::SuperAwesome const> SuperAwesomeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::performance_tests::SuperAwesome_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::performance_tests::SuperAwesome_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace performance_tests

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'performance_tests': ['/home/arunjayan/assignment_workspace/src/performance_tests/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::performance_tests::SuperAwesome_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::performance_tests::SuperAwesome_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performance_tests::SuperAwesome_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performance_tests::SuperAwesome_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performance_tests::SuperAwesome_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performance_tests::SuperAwesome_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::performance_tests::SuperAwesome_<ContainerAllocator> >
{
  static const char* value()
  {
    return "994972b6e03928b2476860ce6c4c8e17";
  }

  static const char* value(const ::performance_tests::SuperAwesome_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x994972b6e03928b2ULL;
  static const uint64_t static_value2 = 0x476860ce6c4c8e17ULL;
};

template<class ContainerAllocator>
struct DataType< ::performance_tests::SuperAwesome_<ContainerAllocator> >
{
  static const char* value()
  {
    return "performance_tests/SuperAwesome";
  }

  static const char* value(const ::performance_tests::SuperAwesome_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::performance_tests::SuperAwesome_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string str\n"
;
  }

  static const char* value(const ::performance_tests::SuperAwesome_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::performance_tests::SuperAwesome_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.str);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SuperAwesome_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::performance_tests::SuperAwesome_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::performance_tests::SuperAwesome_<ContainerAllocator>& v)
  {
    s << indent << "str: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.str);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERFORMANCE_TESTS_MESSAGE_SUPERAWESOME_H