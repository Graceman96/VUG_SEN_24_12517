package com.deptmgrt.examproject.Controller;

import com.deptmgrt.examproject.Service.DepartmentService;
import com.deptmgrt.examproject.Service.StudentService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

public class StudentController {
        @Autowired
        StudentService service;
        @GetMapping("/student")
        public String View(Model model){
            model.addAttribute("Student", service.getAllStudents());
            return "student";

        }
}
