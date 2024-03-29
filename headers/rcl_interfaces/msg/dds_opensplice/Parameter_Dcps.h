#ifndef _H_6686C8415AD5DD24C6915C15558EE902_Parameter_DCPS_H_
#define _H_6686C8415AD5DD24C6915C15558EE902_Parameter_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Parameter_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class Parameter_TypeSupportInterface;

            typedef Parameter_TypeSupportInterface * Parameter_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Parameter_TypeSupportInterface> Parameter_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Parameter_TypeSupportInterface> Parameter_TypeSupportInterface_out;


            class Parameter_DataWriter;

            typedef Parameter_DataWriter * Parameter_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Parameter_DataWriter> Parameter_DataWriter_var;
            typedef DDS_DCPSInterface_out < Parameter_DataWriter> Parameter_DataWriter_out;


            class Parameter_DataReader;

            typedef Parameter_DataReader * Parameter_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Parameter_DataReader> Parameter_DataReader_var;
            typedef DDS_DCPSInterface_out < Parameter_DataReader> Parameter_DataReader_out;


            class Parameter_DataReaderView;

            typedef Parameter_DataReaderView * Parameter_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Parameter_DataReaderView> Parameter_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Parameter_DataReaderView> Parameter_DataReaderView_out;

            struct Parameter_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Parameter_, struct Parameter_Seq_uniq_> Parameter_Seq;
            typedef DDS_DCPSSequence_var < Parameter_Seq> Parameter_Seq_var;
            typedef DDS_DCPSSequence_out < Parameter_Seq> Parameter_Seq_out;

            class  Parameter_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Parameter_TypeSupportInterface_ptr _ptr_type;
                typedef Parameter_TypeSupportInterface_var _var_type;

                static Parameter_TypeSupportInterface_ptr _duplicate (Parameter_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Parameter_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Parameter_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Parameter_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Parameter_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Parameter_TypeSupportInterface () {};
                ~Parameter_TypeSupportInterface () {};
            private:
                Parameter_TypeSupportInterface (const Parameter_TypeSupportInterface &);
                Parameter_TypeSupportInterface & operator = (const Parameter_TypeSupportInterface &);
            };

            class  Parameter_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Parameter_DataWriter_ptr _ptr_type;
                typedef Parameter_DataWriter_var _var_type;

                static Parameter_DataWriter_ptr _duplicate (Parameter_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Parameter_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Parameter_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Parameter_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Parameter_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Parameter_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Parameter_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Parameter_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Parameter_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Parameter_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Parameter_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Parameter_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Parameter_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Parameter_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Parameter_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Parameter_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Parameter_& instance_data) = 0;

            protected:
                Parameter_DataWriter () {};
                ~Parameter_DataWriter () {};
            private:
                Parameter_DataWriter (const Parameter_DataWriter &);
                Parameter_DataWriter & operator = (const Parameter_DataWriter &);
            };

            class  Parameter_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Parameter_DataReader_ptr _ptr_type;
                typedef Parameter_DataReader_var _var_type;

                static Parameter_DataReader_ptr _duplicate (Parameter_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Parameter_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Parameter_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Parameter_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Parameter_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Parameter_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Parameter_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Parameter_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Parameter_& instance) = 0;

            protected:
                Parameter_DataReader () {};
                ~Parameter_DataReader () {};
            private:
                Parameter_DataReader (const Parameter_DataReader &);
                Parameter_DataReader & operator = (const Parameter_DataReader &);
            };

            class  Parameter_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Parameter_DataReaderView_ptr _ptr_type;
                typedef Parameter_DataReaderView_var _var_type;

                static Parameter_DataReaderView_ptr _duplicate (Parameter_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Parameter_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Parameter_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Parameter_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Parameter_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Parameter_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Parameter_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Parameter_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Parameter_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Parameter_& instance) = 0;

            protected:
                Parameter_DataReaderView () {};
                ~Parameter_DataReaderView () {};
            private:
                Parameter_DataReaderView (const Parameter_DataReaderView &);
                Parameter_DataReaderView & operator = (const Parameter_DataReaderView &);
            };
        }

    }

}

#endif
