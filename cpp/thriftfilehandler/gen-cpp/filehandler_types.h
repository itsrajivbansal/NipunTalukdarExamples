/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef filehandler_TYPES_H
#define filehandler_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>


#include <stdint.h>
#include <inttypes.h>

namespace FileHandler {

struct Operation {
  enum type {
    CREATE = 0,
    DELETE = 1,
    FILECONTENT = 2,
    DIRCONTENT = 3
  };
};

extern const std::map<int, const char*> _Operation_VALUES_TO_NAMES;

typedef struct _BadOperation__isset {
  _BadOperation__isset() : what(false), reason(false) {}
  bool what;
  bool reason;
} _BadOperation__isset;

class BadOperation : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "96705E9A3FD7B072319C71653E0DBB90";
  static const uint8_t binary_fingerprint[16]; // = {0x96,0x70,0x5E,0x9A,0x3F,0xD7,0xB0,0x72,0x31,0x9C,0x71,0x65,0x3E,0x0D,0xBB,0x90};

  BadOperation() : what(0), reason("") {
  }

  virtual ~BadOperation() throw() {}

  int32_t what;
  std::string reason;

  _BadOperation__isset __isset;

  void __set_what(const int32_t val) {
    what = val;
  }

  void __set_reason(const std::string& val) {
    reason = val;
    __isset.reason = true;
  }

  bool operator == (const BadOperation & rhs) const
  {
    if (!(what == rhs.what))
      return false;
    if (__isset.reason != rhs.__isset.reason)
      return false;
    else if (__isset.reason && !(reason == rhs.reason))
      return false;
    return true;
  }
  bool operator != (const BadOperation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BadOperation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Work__isset {
  _Work__isset() : op(false), filename(false), data(false), rootdir(false) {}
  bool op;
  bool filename;
  bool data;
  bool rootdir;
} _Work__isset;

class Work {
 public:

  static const char* ascii_fingerprint; // = "EC8C8E8D6042A67E4AF0F04DA3F39A73";
  static const uint8_t binary_fingerprint[16]; // = {0xEC,0x8C,0x8E,0x8D,0x60,0x42,0xA6,0x7E,0x4A,0xF0,0xF0,0x4D,0xA3,0xF3,0x9A,0x73};

  Work() : op((Operation::type)0), filename(""), data(""), rootdir("") {
  }

  virtual ~Work() throw() {}

  Operation::type op;
  std::string filename;
  std::string data;
  std::string rootdir;

  _Work__isset __isset;

  void __set_op(const Operation::type val) {
    op = val;
  }

  void __set_filename(const std::string& val) {
    filename = val;
  }

  void __set_data(const std::string& val) {
    data = val;
  }

  void __set_rootdir(const std::string& val) {
    rootdir = val;
  }

  bool operator == (const Work & rhs) const
  {
    if (!(op == rhs.op))
      return false;
    if (!(filename == rhs.filename))
      return false;
    if (!(data == rhs.data))
      return false;
    if (!(rootdir == rhs.rootdir))
      return false;
    return true;
  }
  bool operator != (const Work &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Work & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

} // namespace

#endif