// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rob599_hw2_msgs:srv/ApplyBrakes.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rob599_hw2_msgs/srv/detail/apply_brakes__struct.h"
#include "rob599_hw2_msgs/srv/detail/apply_brakes__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rob599_hw2_msgs__srv__apply_brakes__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rob599_hw2_msgs.srv._apply_brakes.ApplyBrakes_Request", full_classname_dest, 53) == 0);
  }
  rob599_hw2_msgs__srv__ApplyBrakes_Request * ros_message = _ros_message;
  {  // brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "brakes");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brakes = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rob599_hw2_msgs__srv__apply_brakes__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ApplyBrakes_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rob599_hw2_msgs.srv._apply_brakes");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ApplyBrakes_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rob599_hw2_msgs__srv__ApplyBrakes_Request * ros_message = (rob599_hw2_msgs__srv__ApplyBrakes_Request *)raw_ros_message;
  {  // brakes
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brakes ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rob599_hw2_msgs/srv/detail/apply_brakes__struct.h"
// already included above
// #include "rob599_hw2_msgs/srv/detail/apply_brakes__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rob599_hw2_msgs__srv__apply_brakes__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rob599_hw2_msgs.srv._apply_brakes.ApplyBrakes_Response", full_classname_dest, 54) == 0);
  }
  rob599_hw2_msgs__srv__ApplyBrakes_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rob599_hw2_msgs__srv__apply_brakes__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ApplyBrakes_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rob599_hw2_msgs.srv._apply_brakes");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ApplyBrakes_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rob599_hw2_msgs__srv__ApplyBrakes_Response * ros_message = (rob599_hw2_msgs__srv__ApplyBrakes_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
