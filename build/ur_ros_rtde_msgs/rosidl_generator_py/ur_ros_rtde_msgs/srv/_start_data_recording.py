# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ur_ros_rtde_msgs:srv/StartDataRecording.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StartDataRecording_Request(type):
    """Metaclass of message 'StartDataRecording_Request'."""

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
                'ur_ros_rtde_msgs.srv.StartDataRecording_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_data_recording__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_data_recording__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_data_recording__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_data_recording__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_data_recording__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FILENAME__DEFAULT': '',
        }

    @property
    def FILENAME__DEFAULT(cls):
        """Return default value for message field 'filename'."""
        return ''


class StartDataRecording_Request(metaclass=Metaclass_StartDataRecording_Request):
    """Message class 'StartDataRecording_Request'."""

    __slots__ = [
        '_filename',
        '_variables',
    ]

    _fields_and_field_types = {
        'filename': 'string',
        'variables': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.filename = kwargs.get(
            'filename', StartDataRecording_Request.FILENAME__DEFAULT)
        self.variables = kwargs.get('variables', [])

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
        if self.filename != other.filename:
            return False
        if self.variables != other.variables:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def filename(self):
        """Message field 'filename'."""
        return self._filename

    @filename.setter
    def filename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filename' field must be of type 'str'"
        self._filename = value

    @builtins.property
    def variables(self):
        """Message field 'variables'."""
        return self._variables

    @variables.setter
    def variables(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'variables' field must be a set or sequence and each value of type 'str'"
        self._variables = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_StartDataRecording_Response(type):
    """Metaclass of message 'StartDataRecording_Response'."""

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
                'ur_ros_rtde_msgs.srv.StartDataRecording_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_data_recording__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_data_recording__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_data_recording__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_data_recording__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_data_recording__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartDataRecording_Response(metaclass=Metaclass_StartDataRecording_Response):
    """Message class 'StartDataRecording_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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


class Metaclass_StartDataRecording(type):
    """Metaclass of service 'StartDataRecording'."""

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
                'ur_ros_rtde_msgs.srv.StartDataRecording')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__start_data_recording

            from ur_ros_rtde_msgs.srv import _start_data_recording
            if _start_data_recording.Metaclass_StartDataRecording_Request._TYPE_SUPPORT is None:
                _start_data_recording.Metaclass_StartDataRecording_Request.__import_type_support__()
            if _start_data_recording.Metaclass_StartDataRecording_Response._TYPE_SUPPORT is None:
                _start_data_recording.Metaclass_StartDataRecording_Response.__import_type_support__()


class StartDataRecording(metaclass=Metaclass_StartDataRecording):
    from ur_ros_rtde_msgs.srv._start_data_recording import StartDataRecording_Request as Request
    from ur_ros_rtde_msgs.srv._start_data_recording import StartDataRecording_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
