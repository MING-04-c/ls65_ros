# generated from rosidl_generator_py/resource/_idl.py.em
# with input from eli_common_interface:msg/ToolData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ToolData(type):
    """Metaclass of message 'ToolData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('eli_common_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'eli_common_interface.msg.ToolData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tool_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tool_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tool_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tool_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tool_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToolData(metaclass=Metaclass_ToolData):
    """Message class 'ToolData'."""

    __slots__ = [
        '_mode',
        '_output_voltage',
        '_output_current',
        '_temperature',
        '_analog_input_type',
        '_analog_input',
        '_analog_output_type',
        '_analog_output',
    ]

    _fields_and_field_types = {
        'mode': 'uint8',
        'output_voltage': 'double',
        'output_current': 'double',
        'temperature': 'double',
        'analog_input_type': 'uint8',
        'analog_input': 'double',
        'analog_output_type': 'uint8',
        'analog_output': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())
        self.output_voltage = kwargs.get('output_voltage', float())
        self.output_current = kwargs.get('output_current', float())
        self.temperature = kwargs.get('temperature', float())
        self.analog_input_type = kwargs.get('analog_input_type', int())
        self.analog_input = kwargs.get('analog_input', float())
        self.analog_output_type = kwargs.get('analog_output_type', int())
        self.analog_output = kwargs.get('analog_output', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mode != other.mode:
            return False
        if self.output_voltage != other.output_voltage:
            return False
        if self.output_current != other.output_current:
            return False
        if self.temperature != other.temperature:
            return False
        if self.analog_input_type != other.analog_input_type:
            return False
        if self.analog_input != other.analog_input:
            return False
        if self.analog_output_type != other.analog_output_type:
            return False
        if self.analog_output != other.analog_output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def output_voltage(self):
        """Message field 'output_voltage'."""
        return self._output_voltage

    @output_voltage.setter
    def output_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output_voltage = value

    @builtins.property
    def output_current(self):
        """Message field 'output_current'."""
        return self._output_current

    @output_current.setter
    def output_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'output_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'output_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._output_current = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temperature = value

    @builtins.property
    def analog_input_type(self):
        """Message field 'analog_input_type'."""
        return self._analog_input_type

    @analog_input_type.setter
    def analog_input_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'analog_input_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'analog_input_type' field must be an unsigned integer in [0, 255]"
        self._analog_input_type = value

    @builtins.property
    def analog_input(self):
        """Message field 'analog_input'."""
        return self._analog_input

    @analog_input.setter
    def analog_input(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'analog_input' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'analog_input' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._analog_input = value

    @builtins.property
    def analog_output_type(self):
        """Message field 'analog_output_type'."""
        return self._analog_output_type

    @analog_output_type.setter
    def analog_output_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'analog_output_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'analog_output_type' field must be an unsigned integer in [0, 255]"
        self._analog_output_type = value

    @builtins.property
    def analog_output(self):
        """Message field 'analog_output'."""
        return self._analog_output

    @analog_output.setter
    def analog_output(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'analog_output' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'analog_output' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._analog_output = value
