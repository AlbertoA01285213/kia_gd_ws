# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ur_ros_rtde_gripper_commands:action/SgRelease.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SgRelease_Goal(type):
    """Metaclass of message 'SgRelease_Goal'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TOOL_INDEX__DEFAULT': 0,
            'BLOCKING__DEFAULT': True,
            'DEPTH_COMPENSATION__DEFAULT': False,
        }

    @property
    def TOOL_INDEX__DEFAULT(cls):
        """Return default value for message field 'tool_index'."""
        return 0

    @property
    def BLOCKING__DEFAULT(cls):
        """Return default value for message field 'blocking'."""
        return True

    @property
    def DEPTH_COMPENSATION__DEFAULT(cls):
        """Return default value for message field 'depth_compensation'."""
        return False


class SgRelease_Goal(metaclass=Metaclass_SgRelease_Goal):
    """Message class 'SgRelease_Goal'."""

    __slots__ = [
        '_target_width',
        '_tool_index',
        '_blocking',
        '_depth_compensation',
    ]

    _fields_and_field_types = {
        'target_width': 'double',
        'tool_index': 'int32',
        'blocking': 'boolean',
        'depth_compensation': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_width = kwargs.get('target_width', float())
        self.tool_index = kwargs.get(
            'tool_index', SgRelease_Goal.TOOL_INDEX__DEFAULT)
        self.blocking = kwargs.get(
            'blocking', SgRelease_Goal.BLOCKING__DEFAULT)
        self.depth_compensation = kwargs.get(
            'depth_compensation', SgRelease_Goal.DEPTH_COMPENSATION__DEFAULT)

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
        if self.target_width != other.target_width:
            return False
        if self.tool_index != other.tool_index:
            return False
        if self.blocking != other.blocking:
            return False
        if self.depth_compensation != other.depth_compensation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_width(self):
        """Message field 'target_width'."""
        return self._target_width

    @target_width.setter
    def target_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_width = value

    @builtins.property
    def tool_index(self):
        """Message field 'tool_index'."""
        return self._tool_index

    @tool_index.setter
    def tool_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tool_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tool_index' field must be an integer in [-2147483648, 2147483647]"
        self._tool_index = value

    @builtins.property
    def blocking(self):
        """Message field 'blocking'."""
        return self._blocking

    @blocking.setter
    def blocking(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blocking' field must be of type 'bool'"
        self._blocking = value

    @builtins.property
    def depth_compensation(self):
        """Message field 'depth_compensation'."""
        return self._depth_compensation

    @depth_compensation.setter
    def depth_compensation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'depth_compensation' field must be of type 'bool'"
        self._depth_compensation = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SgRelease_Result(type):
    """Metaclass of message 'SgRelease_Result'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SgRelease_Result(metaclass=Metaclass_SgRelease_Result):
    """Message class 'SgRelease_Result'."""

    __slots__ = [
        '_result',
        '_width',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
        'width': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())
        self.width = kwargs.get('width', float())

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
        if self.result != other.result:
            return False
        if self.width != other.width:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SgRelease_Feedback(type):
    """Metaclass of message 'SgRelease_Feedback'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SgRelease_Feedback(metaclass=Metaclass_SgRelease_Feedback):
    """Message class 'SgRelease_Feedback'."""

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

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SgRelease_SendGoal_Request(type):
    """Metaclass of message 'SgRelease_SendGoal_Request'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__send_goal__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

            from ur_ros_rtde_gripper_commands.action import SgRelease
            if SgRelease.Goal.__class__._TYPE_SUPPORT is None:
                SgRelease.Goal.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SgRelease_SendGoal_Request(metaclass=Metaclass_SgRelease_SendGoal_Request):
    """Message class 'SgRelease_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'ur_ros_rtde_gripper_commands/SgRelease_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ur_ros_rtde_gripper_commands', 'action'], 'SgRelease_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Goal
        self.goal = kwargs.get('goal', SgRelease_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Goal
            assert \
                isinstance(value, SgRelease_Goal), \
                "The 'goal' field must be a sub message of type 'SgRelease_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SgRelease_SendGoal_Response(type):
    """Metaclass of message 'SgRelease_SendGoal_Response'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SgRelease_SendGoal_Response(metaclass=Metaclass_SgRelease_SendGoal_Response):
    """Message class 'SgRelease_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_SgRelease_SendGoal(type):
    """Metaclass of service 'SgRelease_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__sg_release__send_goal

            from ur_ros_rtde_gripper_commands.action import _sg_release
            if _sg_release.Metaclass_SgRelease_SendGoal_Request._TYPE_SUPPORT is None:
                _sg_release.Metaclass_SgRelease_SendGoal_Request.__import_type_support__()
            if _sg_release.Metaclass_SgRelease_SendGoal_Response._TYPE_SUPPORT is None:
                _sg_release.Metaclass_SgRelease_SendGoal_Response.__import_type_support__()


class SgRelease_SendGoal(metaclass=Metaclass_SgRelease_SendGoal):
    from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_SendGoal_Request as Request
    from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SgRelease_GetResult_Request(type):
    """Metaclass of message 'SgRelease_GetResult_Request'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SgRelease_GetResult_Request(metaclass=Metaclass_SgRelease_GetResult_Request):
    """Message class 'SgRelease_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SgRelease_GetResult_Response(type):
    """Metaclass of message 'SgRelease_GetResult_Response'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__get_result__response

            from ur_ros_rtde_gripper_commands.action import SgRelease
            if SgRelease.Result.__class__._TYPE_SUPPORT is None:
                SgRelease.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SgRelease_GetResult_Response(metaclass=Metaclass_SgRelease_GetResult_Response):
    """Message class 'SgRelease_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'ur_ros_rtde_gripper_commands/SgRelease_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ur_ros_rtde_gripper_commands', 'action'], 'SgRelease_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Result
        self.result = kwargs.get('result', SgRelease_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Result
            assert \
                isinstance(value, SgRelease_Result), \
                "The 'result' field must be a sub message of type 'SgRelease_Result'"
        self._result = value


class Metaclass_SgRelease_GetResult(type):
    """Metaclass of service 'SgRelease_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__sg_release__get_result

            from ur_ros_rtde_gripper_commands.action import _sg_release
            if _sg_release.Metaclass_SgRelease_GetResult_Request._TYPE_SUPPORT is None:
                _sg_release.Metaclass_SgRelease_GetResult_Request.__import_type_support__()
            if _sg_release.Metaclass_SgRelease_GetResult_Response._TYPE_SUPPORT is None:
                _sg_release.Metaclass_SgRelease_GetResult_Response.__import_type_support__()


class SgRelease_GetResult(metaclass=Metaclass_SgRelease_GetResult):
    from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_GetResult_Request as Request
    from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SgRelease_FeedbackMessage(type):
    """Metaclass of message 'SgRelease_FeedbackMessage'."""

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
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__sg_release__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__sg_release__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__sg_release__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__sg_release__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__sg_release__feedback_message

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

            from ur_ros_rtde_gripper_commands.action import SgRelease
            if SgRelease.Feedback.__class__._TYPE_SUPPORT is None:
                SgRelease.Feedback.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SgRelease_FeedbackMessage(metaclass=Metaclass_SgRelease_FeedbackMessage):
    """Message class 'SgRelease_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'ur_ros_rtde_gripper_commands/SgRelease_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ur_ros_rtde_gripper_commands', 'action'], 'SgRelease_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Feedback
        self.feedback = kwargs.get('feedback', SgRelease_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Feedback
            assert \
                isinstance(value, SgRelease_Feedback), \
                "The 'feedback' field must be a sub message of type 'SgRelease_Feedback'"
        self._feedback = value


class Metaclass_SgRelease(type):
    """Metaclass of action 'SgRelease'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_ros_rtde_gripper_commands')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_ros_rtde_gripper_commands.action.SgRelease')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__sg_release

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from ur_ros_rtde_gripper_commands.action import _sg_release
            if _sg_release.Metaclass_SgRelease_SendGoal._TYPE_SUPPORT is None:
                _sg_release.Metaclass_SgRelease_SendGoal.__import_type_support__()
            if _sg_release.Metaclass_SgRelease_GetResult._TYPE_SUPPORT is None:
                _sg_release.Metaclass_SgRelease_GetResult.__import_type_support__()
            if _sg_release.Metaclass_SgRelease_FeedbackMessage._TYPE_SUPPORT is None:
                _sg_release.Metaclass_SgRelease_FeedbackMessage.__import_type_support__()


class SgRelease(metaclass=Metaclass_SgRelease):

    # The goal message defined in the action definition.
    from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Goal as Goal
    # The result message defined in the action definition.
    from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Result as Result
    # The feedback message defined in the action definition.
    from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from ur_ros_rtde_gripper_commands.action._sg_release import SgRelease_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
