package com.deptmgrt.examproject.Controller;
import com.deptmgrt.examproject.Service.DepartmentService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class DepartmentController {
        @Autowired
        DepartmentService service;
        @GetMapping("/department")
        public String View(Model model){
                model.addAttribute("Department", service.getAllDepartment());
                return "departments";

        }
}
