#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__RobotMode() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__msg__RobotMode__init(msg: *mut RobotMode) -> bool;
    fn eli_common_interface__msg__RobotMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>, size: usize) -> bool;
    fn eli_common_interface__msg__RobotMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>);
    fn eli_common_interface__msg__RobotMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotMode>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotMode>) -> bool;
}

// Corresponds to eli_common_interface__msg__RobotMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i8,

}

impl RobotMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: i8 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_CONTROLLER: i8 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DISCONNECTED: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONFIRM_SAFETY: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOOTING: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_OFF: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_ON: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: i8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BACKDRIVE: i8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RUNNING: i8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UPDATING_FIRMWARE: i8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WAITING_CALIBRATION: i8 = 9;

}


impl Default for RobotMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__msg__RobotMode__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__msg__RobotMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__RobotMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__RobotMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__RobotMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotMode where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/msg/RobotMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__RobotMode() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__TaskStatus() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__msg__TaskStatus__init(msg: *mut TaskStatus) -> bool;
    fn eli_common_interface__msg__TaskStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskStatus>, size: usize) -> bool;
    fn eli_common_interface__msg__TaskStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskStatus>);
    fn eli_common_interface__msg__TaskStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskStatus>) -> bool;
}

// Corresponds to eli_common_interface__msg__TaskStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,

}

impl TaskStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: i8 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOPPED: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAUSED: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLAYING: i8 = 2;

}


impl Default for TaskStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__msg__TaskStatus__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__msg__TaskStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__TaskStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__TaskStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__TaskStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskStatus where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/msg/TaskStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__TaskStatus() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__SafetyMode() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__msg__SafetyMode__init(msg: *mut SafetyMode) -> bool;
    fn eli_common_interface__msg__SafetyMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafetyMode>, size: usize) -> bool;
    fn eli_common_interface__msg__SafetyMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafetyMode>);
    fn eli_common_interface__msg__SafetyMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafetyMode>, out_seq: *mut rosidl_runtime_rs::Sequence<SafetyMode>) -> bool;
}

// Corresponds to eli_common_interface__msg__SafetyMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafetyMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i8,

}

impl SafetyMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: i8 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NORMAL: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REDUCED: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROTECTIVE_STOP: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RECOVERY: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SAFEGUARD_STOP: i8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_EMERGENCY_STOP: i8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROBOT_EMERGENCY_STOP: i8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VIOLATION: i8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAULT: i8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VALIDATE_JOINT_ID: i8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNDEFINED_SAFETY_MODE: i8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTOMATIC_MODE_SAFEGUARD_STOP: i8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_THREE_POSITION_ENABLING_STOP: i8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TP_THREE_POSITION_ENABLING_STOP: i8 = 14;

}


impl Default for SafetyMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__msg__SafetyMode__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__msg__SafetyMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafetyMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__SafetyMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__SafetyMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__SafetyMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafetyMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafetyMode where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/msg/SafetyMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__SafetyMode() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__Analog() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__msg__Analog__init(msg: *mut Analog) -> bool;
    fn eli_common_interface__msg__Analog__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Analog>, size: usize) -> bool;
    fn eli_common_interface__msg__Analog__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Analog>);
    fn eli_common_interface__msg__Analog__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Analog>, out_seq: *mut rosidl_runtime_rs::Sequence<Analog>) -> bool;
}

// Corresponds to eli_common_interface__msg__Analog
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Analog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,

}



impl Default for Analog {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__msg__Analog__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__msg__Analog__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Analog {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__Analog__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__Analog__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__Analog__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Analog {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Analog where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/msg/Analog";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__Analog() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__IOState() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__msg__IOState__init(msg: *mut IOState) -> bool;
    fn eli_common_interface__msg__IOState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IOState>, size: usize) -> bool;
    fn eli_common_interface__msg__IOState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IOState>);
    fn eli_common_interface__msg__IOState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IOState>, out_seq: *mut rosidl_runtime_rs::Sequence<IOState>) -> bool;
}

// Corresponds to eli_common_interface__msg__IOState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IOState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_out: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub config_out: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tool_out: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_in: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub config_in: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tool_in: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_analog_out: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Analog>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub standard_analog_in: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Analog>,

}



impl Default for IOState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__msg__IOState__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__msg__IOState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IOState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__IOState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__IOState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__IOState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IOState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IOState where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/msg/IOState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__IOState() }
  }
}


#[link(name = "eli_common_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__ToolData() -> *const std::ffi::c_void;
}

#[link(name = "eli_common_interface__rosidl_generator_c")]
extern "C" {
    fn eli_common_interface__msg__ToolData__init(msg: *mut ToolData) -> bool;
    fn eli_common_interface__msg__ToolData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolData>, size: usize) -> bool;
    fn eli_common_interface__msg__ToolData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolData>);
    fn eli_common_interface__msg__ToolData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolData>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolData>) -> bool;
}

// Corresponds to eli_common_interface__msg__ToolData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_input_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_input: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_output_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub analog_output: f64,

}



impl Default for ToolData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !eli_common_interface__msg__ToolData__init(&mut msg as *mut _) {
        panic!("Call to eli_common_interface__msg__ToolData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__ToolData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__ToolData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { eli_common_interface__msg__ToolData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolData where Self: Sized {
  const TYPE_NAME: &'static str = "eli_common_interface/msg/ToolData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__eli_common_interface__msg__ToolData() }
  }
}


