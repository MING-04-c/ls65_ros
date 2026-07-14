// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from eli_common_interface:msg/ToolData.idl
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
#include "eli_common_interface/msg/detail/tool_data__struct.h"
#include "eli_common_interface/msg/detail/tool_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool eli_common_interface__msg__tool_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("eli_common_interface.msg._tool_data.ToolData", full_classname_dest, 44) == 0);
  }
  eli_common_interface__msg__ToolData * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // output_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // analog_input_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_input_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_input_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_input");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->analog_input = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // analog_output_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_output_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_output_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->analog_output = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * eli_common_interface__msg__tool_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ToolData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("eli_common_interface.msg._tool_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ToolData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  eli_common_interface__msg__ToolData * ros_message = (eli_common_interface__msg__ToolData *)raw_ros_message;
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_input_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_input_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_input_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_input
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->analog_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_output_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_output_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_output_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->analog_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
