# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ur_ros_rtde_msgs:srv/GetInternalState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetInternalState_Request(type):
    """Metaclass of message 'GetInternalState_Request'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.srv.GetInternalState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_internal_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_internal_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_internal_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_internal_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_internal_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetInternalState_Request(metaclass=Metaclass_GetInternalState_Request):
    """Message class 'GetInternalState_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetInternalState_Response(type):
    """Metaclass of message 'GetInternalState_Response'."""

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
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.srv.GetInternalState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_internal_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_internal_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_internal_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_internal_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_internal_state__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetInternalState_Response(metaclass=Metaclass_GetInternalState_Response):
    """Message class 'GetInternalState_Response'."""

    __slots__ = [
        '_success',
        '_digital_input_state',
        '_digital_output_state',
        '_speed_slider_value',
        '_payload_value',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'digital_input_state': 'sequence<boolean>',
        'digital_output_state': 'sequence<boolean>',
        'speed_slider_value': 'double',
        'payload_value': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.digital_input_state = kwargs.get('digital_input_state', [])
        self.digital_output_state = kwargs.get('digital_output_state', [])
        self.speed_slider_value = kwargs.get('speed_slider_value', float())
        self.payload_value = kwargs.get('payload_value', float())

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
        if self.success != other.success:
            return False
        if self.digital_input_state != other.digital_input_state:
            return False
        if self.digital_output_state != other.digital_output_state:
            return False
        if self.speed_slider_value != other.speed_slider_value:
            return False
        if self.payload_value != other.payload_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def digital_input_state(self):
        """Message field 'digital_input_state'."""
        return self._digital_input_state

    @digital_input_state.setter
    def digital_input_state(self, value):
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
                "The 'digital_input_state' field must be a set or sequence and each value of type 'bool'"
        self._digital_input_state = value

    @builtins.property
    def digital_output_state(self):
        """Message field 'digital_output_state'."""
        return self._digital_output_state

    @digital_output_state.setter
    def digital_output_state(self, value):
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
                "The 'digital_output_state' field must be a set or sequence and each value of type 'bool'"
        self._digital_output_state = value

    @builtins.property
    def speed_slider_value(self):
        """Message field 'speed_slider_value'."""
        return self._speed_slider_value

    @speed_slider_value.setter
    def speed_slider_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_slider_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_slider_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_slider_value = value

    @builtins.property
    def payload_value(self):
        """Message field 'payload_value'."""
        return self._payload_value

    @payload_value.setter
    def payload_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'payload_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'payload_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._payload_value = value


class Metaclass_GetInternalState(type):
    """Metaclass of service 'GetInternalState'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_ros_rtde_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_msgs.srv.GetInternalState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_internal_state

            from ur_ros_rtde_msgs.srv import _get_internal_state
            if _get_internal_state.Metaclass_GetInternalState_Request._TYPE_SUPPORT is None:
                _get_internal_state.Metaclass_GetInternalState_Request.__import_type_support__()
            if _get_internal_state.Metaclass_GetInternalState_Response._TYPE_SUPPORT is None:
                _get_internal_state.Metaclass_GetInternalState_Response.__import_type_support__()


class GetInternalState(metaclass=Metaclass_GetInternalState):
    from ur_ros_rtde_msgs.srv._get_internal_state import GetInternalState_Request as Request
    from ur_ros_rtde_msgs.srv._get_internal_state import GetInternalState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
