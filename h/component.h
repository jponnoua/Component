#ifndef COMPONENT_H_
#define COMPONENT_H_

typedef struct {
    uint64_t version;
    uint64_t revision;
} sComponentVersion;

typedef struct {

} sComponentInternalCommSettings;

typedef struct {

} sComponentExternalCommSettings;

typedef struct {

} sComponentStateMachineSettings;

class cComponent {
    public:
        cComponent(std::string in_name, uint64_t in_version, uint64_t in_revision);
        ~cComponent();

        void cComponent_display();
        void cComponent_configure();
        void cComponent_start();
        void cComponent_stop();

    protected:
    private:
        // Info
        std::string m_name;
        sComponentVersion m_version;

        // Configuration
        bool m_has_internal_comm;
        bool m_has_external_comm;
        bool m_has_state_machine;

        // Settings
        sComponentInternalCommSettings m_internal_comm_settings;
        sComponentExternalCommSettings m_external_comm_settings;
        sComponentStateMachineSettings m_state_machine_settings;
};

#endif