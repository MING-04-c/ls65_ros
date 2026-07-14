# generated from rosidl_generator_py/resource/_idl.py.em
# with input from eli_common_interface:msg/IOState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IOState(type):
    """Metaclass of message 'IOState'."""

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
                'eli_common_interface.msg.IOState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__io_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__io_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__io_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__io_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__io_state

            from eli_common_interface.msg import Analog
            if Analog.__class__._TYPE_SUPPORT is None:
                Analog.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IOState(metaclass=Metaclass_IOState):
    """Message class 'IOState'."""

    __slots__ = [
        '_standard_out',
        '_config_out',
        '_tool_out',
        '_standard_in',
        '_config_in',
        '_tool_in',
        '_standard_analog_out',
        '_standard_analog_in',
    ]

    _fields_and_field_types = {
        'standard_out': 'sequence<boolean>',
        'config_out': 'sequence<boolean>',
        'tool_out': 'sequence<boolean>',
        'standard_in': 'sequence<boolean>',
        'config_in': 'sequence<boolean>',
        'tool_in': 'sequence<boolean>',
        'standard_analog_out': 'sequence<eli_common_interface/Analog>',
        'standard_analog_in': 'sequence<eli_common_interface/Analog>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['eli_common_interface', 'msg'], 'Analog')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['eli_common_interface', 'msg'], 'Analog')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.standard_out = kwargs.get('standard_out', [])
        self.config_out = kwargs.get('config_out', [])
        self.tool_out = kwargs.get('tool_out', [])
        self.standard_in = kwargs.get('standard_in', [])
        self.config_in = kwargs.get('config_in', [])
        self.tool_in = kwargs.get('tool_in', [])
        self.standard_analog_out = kwargs.get('standard_analog_out', [])
        self.standard_analog_in = kwargs.get('standard_analog_in', [])

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
        if self.standard_out != other.standard_out:
            return False
        if self.config_out != other.config_out:
            return False
        if self.tool_out != other.tool_out:
            return False
        if self.standard_in != other.standard_in:
            return False
        if self.config_in != other.config_in:
            return False
        if self.tool_in != other.tool_in:
            return False
        if self.standard_analog_out != other.standard_analog_out:
            return False
        if self.standard_analog_in != other.standard_analog_in:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def standard_out(self):
        """Message field 'standard_out'."""
        return self._standard_out

    @standard_out.setter
    def standard_out(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'standard_out' field must be a set or sequence and each value of type 'bool'"
        self._standard_out = value

    @builtins.property
    def config_out(self):
        """Message field 'config_out'."""
        return self._config_out

    @config_out.setter
    def config_out(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'config_out' field must be a set or sequence and each value of type 'bool'"
        self._config_out = value

    @builtins.property
    def tool_out(self):
        """Message field 'tool_out'."""
        return self._tool_out

    @tool_out.setter
    def tool_out(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'tool_out' field must be a set or sequence and each value of type 'bool'"
        self._tool_out = value

    @builtins.property
    def standard_in(self):
        """Message field 'standard_in'."""
        return self._standard_in

    @standard_in.setter
    def standard_in(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'standard_in' field must be a set or sequence and each value of type 'bool'"
        self._standard_in = value

    @builtins.property
    def config_in(self):
        """Message field 'config_in'."""
        return self._config_in

    @config_in.setter
    def config_in(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'config_in' field must be a set or sequence and each value of type 'bool'"
        self._config_in = value

    @builtins.property
    def tool_in(self):
        """Message field 'tool_in'."""
        return self._tool_in

    @tool_in.setter
    def tool_in(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'tool_in' field must be a set or sequence and each value of type 'bool'"
        self._tool_in = value

    @builtins.property
    def standard_analog_out(self):
        """Message field 'standard_analog_out'."""
        return self._standard_analog_out

    @standard_analog_out.setter
    def standard_analog_out(self, value):
        if __debug__:
            from eli_common_interface.msg import Analog
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Analog) for v in value) and
                 True), \
                "The 'standard_analog_out' field must be a set or sequence and each value of type 'Analog'"
        self._standard_analog_out = value

    @builtins.property
    def standard_analog_in(self):
        """Message field 'standard_analog_in'."""
        return self._standard_analog_in

    @standard_analog_in.setter
    def standard_analog_in(self, value):
        if __debug__:
            from eli_common_interface.msg import Analog
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Analog) for v in value) and
                 True), \
                "The 'standard_analog_in' field must be a set or sequence and each value of type 'Analog'"
        self._standard_analog_in = value
