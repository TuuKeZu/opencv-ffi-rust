include!(concat!(env!("OUT_DIR"), "/bindings.rs"));

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_main() {
        let test_struct = TestStruct { a: false };

        let result = unsafe { run_image_tool(test_struct) };
        assert_eq!(result, 43);
    }
}
