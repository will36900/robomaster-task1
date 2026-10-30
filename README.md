# robomaster-task1

ROS 2 学习代码按章节和 workspace 分开保存。

## 目录结构

```text
robomaster-task1/
├── chap2/
│   └── chapt2_ws/
│       └── src/
│           ├── demo_cpp_pkg/
│           └── demo_python_pkg/
├── chap3/
│   └── topic_ws/
│       └── src/
│           └── demo_python_topic/
├── chap6/
    └── chapt6_ws/
        └── src/
            └── fishbot_description/
└── legacy/
    ├── early_ros2/             # 章节化之前的早期 ROS 2 练习
    └── task1/screenshots/      # 第一次任务的截图
```

每个 `*_ws` 都是独立的 ROS 2 workspace。请在对应 workspace 目录中执行构建，例如：

```bash
cd chap6/chapt6_ws
source /opt/ros/lyrical/setup.bash
colcon build
source install/setup.bash
```

`build/`、`install/` 和 `log/` 是本机构建产物，不提交到 Git。
