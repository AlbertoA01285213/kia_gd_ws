# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ur_ros_rtde_msgs:srv/GetWrench.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetWrench_Request(type):
    """Metaclass of message 'GetWrench_Request'."""

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
                'ur_ros_rtde_msgs.srv.GetWrench_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_wrench__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_wrench__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_wrench__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_wrench__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_wrench__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWrench_Request(metaclass=Metaclass_GetWrench_Request):
    """Message class 'GetWrench_Request'."""

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

# already imported above
# import rosidl_parser.definition


class Metaclass_GetWrench_Response(type):
    """Metaclass of message 'GetWrench_Response'."""

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
                'ur_ros_rtde_msgs.srv.GetWrench_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_wrench__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_wrench__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_wrench__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_wrench__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_wrench__response

            from geometry_msgs.msg import Wrench
            if Wrench.__class__._TYPE_SUPPORT is None:
                Wrench.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWrench_Response(metaclass=Metaclass_GetWrench_Response):
    """Message class 'GetWrench_Response'."""

    __slots__ = [
        '_success',
        '_wrench',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'wrench': 'geometry_msgs/Wrench',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Wrench'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from geometry_msgs.msg import Wrench
        self.wrench = kwargs.get('wrench', Wrench())

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
        if self.wrench != other.wrench:
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
    def wrench(self):
        """Message field 'wrench'."""
        return self._wrench

    @wrench.setter
    def wrench(self, value):
        if __debug__:
            from geometry_msgs.msg import Wrench
            assert \
                isinstance(value, Wrench), \
                "The 'wrench' field must be a sub message of type 'Wrench'"
        self._wrench = value


class Metaclass_GetWrench(type):
    """Metaclass of service 'GetWrench'."""

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
                'ur_ros_rtde_msgs.srv.GetWrench')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_wrench

            from ur_ros_rtde_msgs.srv import _get_wrench
            if _get_wrench.Metaclass_GetWrench_Request._TYPE_SUPPORT is None:
                _get_wrench.Metaclass_GetWrench_Request.__import_type_support__()
            if _get_wrench.Metaclass_GetWrench_Response._TYPE_SUPPORT is None:
                _get_wrench.Metaclass_GetWrench_Response.__import_type_support__()


class GetWrench(metaclass=Metaclass_GetWrench):
    from ur_ros_rtde_msgs.srv._get_wrench import GetWrench_Request as Request
    from ur_ros_rtde_msgs.srv._get_wrench import GetWrench_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
