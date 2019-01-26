// Generated by gencpp from file reverse_kinematics/querySolutions.msg
// DO NOT EDIT!


#ifndef REVERSE_KINEMATICS_MESSAGE_QUERYSOLUTIONS_H
#define REVERSE_KINEMATICS_MESSAGE_QUERYSOLUTIONS_H

#include <ros/service_traits.h>


#include <reverse_kinematics/querySolutionsRequest.h>
#include <reverse_kinematics/querySolutionsResponse.h>


namespace reverse_kinematics
{

struct querySolutions
{

typedef querySolutionsRequest Request;
typedef querySolutionsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct querySolutions
} // namespace reverse_kinematics


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::reverse_kinematics::querySolutions > {
  static const char* value()
  {
    return "821141953d32d0eeec745a722a45b3df";
  }

  static const char* value(const ::reverse_kinematics::querySolutions&) { return value(); }
};

template<>
struct DataType< ::reverse_kinematics::querySolutions > {
  static const char* value()
  {
    return "reverse_kinematics/querySolutions";
  }

  static const char* value(const ::reverse_kinematics::querySolutions&) { return value(); }
};


// service_traits::MD5Sum< ::reverse_kinematics::querySolutionsRequest> should match 
// service_traits::MD5Sum< ::reverse_kinematics::querySolutions > 
template<>
struct MD5Sum< ::reverse_kinematics::querySolutionsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::reverse_kinematics::querySolutions >::value();
  }
  static const char* value(const ::reverse_kinematics::querySolutionsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::reverse_kinematics::querySolutionsRequest> should match 
// service_traits::DataType< ::reverse_kinematics::querySolutions > 
template<>
struct DataType< ::reverse_kinematics::querySolutionsRequest>
{
  static const char* value()
  {
    return DataType< ::reverse_kinematics::querySolutions >::value();
  }
  static const char* value(const ::reverse_kinematics::querySolutionsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::reverse_kinematics::querySolutionsResponse> should match 
// service_traits::MD5Sum< ::reverse_kinematics::querySolutions > 
template<>
struct MD5Sum< ::reverse_kinematics::querySolutionsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::reverse_kinematics::querySolutions >::value();
  }
  static const char* value(const ::reverse_kinematics::querySolutionsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::reverse_kinematics::querySolutionsResponse> should match 
// service_traits::DataType< ::reverse_kinematics::querySolutions > 
template<>
struct DataType< ::reverse_kinematics::querySolutionsResponse>
{
  static const char* value()
  {
    return DataType< ::reverse_kinematics::querySolutions >::value();
  }
  static const char* value(const ::reverse_kinematics::querySolutionsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // REVERSE_KINEMATICS_MESSAGE_QUERYSOLUTIONS_H